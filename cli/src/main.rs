use std::{
	error::Error,
	io::{Write, stdin, stdout},
	process::ExitCode,
	time::Duration,
};

use midi2kb::{client::ClientConnector, mappings::Mapping};

fn read_mappings() -> Result<Vec<Mapping>, Box<dyn Error>> {
	let json = std::fs::read("mappings.json")?;
	let mappings = serde_json::from_slice(&json)?;
	Ok(mappings)
}

fn main() -> ExitCode {
	let (ctrlc_send, ctrlc_recv) = std::sync::mpsc::channel();

	let mappings = match read_mappings() {
		Ok(mappings) => mappings,
		Err(err) => {
			eprintln!("Could not load mappings: {err}");
			vec![]
		}
	};

	let (_connection, port_name) = {
		let mut input = String::new();
		let connector = ClientConnector::new("midi2kb").unwrap();
		let in_ports = connector.ports();
		println!("Please select a MIDI input device:");
		for port in &in_ports {
			println!(
				"{}. {}",
				port.id,
				port.name.as_ref().unwrap_or(&port.stable_id)
			);
		}
		loop {
			print!("Input: ");
			let _ = stdout().flush();
			let _ = stdin().read_line(&mut input);
			let Ok(i) = input.trim().parse::<usize>() else {
				continue;
			};
			let Some(port) = in_ports.get(i) else {
				continue;
			};
			let connection = connector.connect(port, "midi2kb-input", mappings);
			match connection {
				Ok(connection) => {
					break (
						connection,
						port.name.as_ref().unwrap_or(&port.stable_id).to_owned(),
					);
				}
				Err(err) => {
					eprintln!("Could not connect to {:?}: {}", port.id, err);
					return ExitCode::FAILURE;
				}
			}
		}
	};

	println!("Successfully connected to {:?}", port_name);
	let handler = ctrlc::set_handler(move || {
		ctrlc_send
			.send(())
			.expect("Could not send termination signal.")
	});

	match handler {
		Ok(()) => ctrlc_recv
			.recv()
			.expect("Could not receive termination signal."),
		Err(_) => loop {
			std::thread::sleep(Duration::from_millis(250));
		},
	}

	ExitCode::SUCCESS
}

#include <fstream>
#include "KeyMapper.h"

#ifdef WIN32
std::unordered_map<std::string, unsigned char> KeyMapper::winKeyCodes;
#define KEYEVENT_KEYUP 0x02
#endif

void KeyMapper::ShowKeymap()
{
	for(auto& keymap : keymaps)
		std::cout << keymap.ToString() << '\n';
}

void KeyMapper::LoadKeymap()
{
	if(configPath.empty())
	{
		std::cout << "No config path was provided\n";
		return;
	}

	std::cout << "Loading keymap from " << configPath << "...\n";
	keymaps.clear();
	std::ifstream config(configPath);
	if(!config.is_open())
	{
		std::cout << "Keymap file could not be opened\n";
		return;
	}
	while(!config.eof())
	{
		try {
			std::string condition, is, toKey;
			unsigned short key = 0, trigger = 0;

			config >> condition >> key >> is >> trigger >> toKey;
			keymaps.emplace_back(condition, key, is, trigger, toKey);
		} catch (std::exception&) {}
	}
	config.close();
	std::cout << "Keymap loaded\n";
}

void KeyMapper::ClearKeymap() {
	configPath = "";
	keymaps.clear();
}

void KeyMapper::SelectDevice()
{
	if(midi.isPortOpen())
	{
		midi.closePort();
		midi.cancelCallback();
	}

	if(midi.getPortCount() == 0)
	{
		std::cout << "No available input devices\n";
		return;
	}

	auto ports = midi.getPortCount(), port = (unsigned int) UINT8_MAX;
	std::cout << "Available devices: \n";
	for(unsigned int i = 0; i < ports; i++)
		std::cout << i << ". " << midi.getPortName(i) << '\n';
	while (port >= ports)
	{
		std::cout << "Select a device: ";
		std::cin >> port;
	}
	midi.openPort(port);
	midi.ignoreTypes();
	midi.setCallback(KeyMapper::OnMidiInput, this);
	std::cin.ignore(INT8_MAX, '\n');
}

void KeyMapper::OnMidiInput(double timeStamp, std::vector<unsigned char> *message, void *userData)
{
	auto keyMapper = (KeyMapper*) userData;
	KeyEvent event(message);

	if(keyMapper->logEvents)
		std::cout << event.ToString() << '\n';

	for (auto& keymap : keyMapper->keymaps)
		if(keymap.CheckEvent(event))
			keyMapper->ExecuteKeymap(keymap);
}

void KeyMapper::ExecuteKeymap(KeyMap& keyMap) {
	if(logEvents)
		std::cout << "[REMAP EVENT] KEY: " << (unsigned short) keyMap.key << " DESTINATION: " << keyMap.toKey << '\n';

	#ifdef WIN32
	auto key = winKeyCodes[keyMap.toKey];
	keybd_event(key,0,0,0);
	keybd_event(key,0,KEYEVENT_KEYUP,0);
	std::cout << std::hex << (unsigned short) key;
	#else
	xdo_send_keysequence_window(x, CURRENTWINDOW, keyMap.toKey.c_str(), 0);
	#endif
}

KeyMapper::KeyMapper() {
	#ifdef WIN32
	if(winKeyCodes.empty())
	{
		for(unsigned char c = 0x41; c <= 0x5A; c++)		//A-Z keys
			winKeyCodes[std::to_string(c)] = c;

		for(unsigned char c = 1; c <= 24; c++)			//F1-F24 Keys
			winKeyCodes["F" + std::to_string(c)] = c+0x6F;
	}
	#else
	x = xdo_new(nullptr);
	#endif
}

KeyMapper::~KeyMapper() {
	#ifdef WIN32
	#else
	xdo_free(x);
	#endif
}

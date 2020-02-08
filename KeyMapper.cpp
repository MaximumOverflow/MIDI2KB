#include <fstream>
#include "KeyMapper.h"


#ifdef WIN32
std::unordered_map<std::string, unsigned char> KeyMapper::winKeyCodes;

KeyMapper::KeyMapper()
{
	if(winKeyCodes.empty())
	{
		for(unsigned char c = 0x41; c <= 0x5A; c++)		//A-Z keys
			winKeyCodes[std::string(1, c)] = c;

		for(unsigned char c = 1; c <= 24; c++)			//F1-F24 Keys
			winKeyCodes["F" + std::to_string(c)] = c+0x6F;
	}
}

KeyMapper::~KeyMapper() {}
#else
KeyMapper::KeyMapper(): x{xdo_new(nullptr)} {}
KeyMapper::~KeyMapper() { xdo_free(x); }
#endif

KeyMapper* KeyMapper::current;


void KeyMapper::LoadKeymap(const std::string& configPath)
{
	if(configPath.empty())
	{
		std::cout << "No config path was provided\n";
		return;
	}

	this->configPath = configPath;
	std::cout << "Loading keymap from " << configPath << "...\n";
	delete keyMaps;
	keyMaps = new KeyMapList(configPath);
	if(!keyMaps->valid)
	{
		delete keyMaps;
		keyMaps = nullptr;
		std::cout << "The provided config file contains errors, please fix it before proceeding\n";
	}
	else std::cout << "Keymap loaded\n";
}

void KeyMapper::ClearKeymap() {
	configPath = "";
	delete keyMaps;
	keyMaps = nullptr;
}

void KeyMapper::SelectDevice()
{
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
	SelectDevice(port);
	std::cin.ignore(INT8_MAX, '\n');
}

void KeyMapper::SelectDevice(unsigned int device) {
    if(device > midi.getPortCount())
    {
        std::cout << "No such device\n";
        return;
    }

    if(midi.isPortOpen())
    {
        midi.closePort();
        midi.cancelCallback();
    }

    midi.openPort(device);
    midi.ignoreTypes();
    midi.setCallback(KeyMapper::OnMidiInput, nullptr);
    std::cout << "Device " << device << " selected\n";
}


void KeyMapper::OnMidiInput(double timeStamp, std::vector<unsigned char> *message, void *userData)
{
	auto keyMapper = current;
	KeyEvent event(message);

    if(keyMapper->logEvents)
		std::cout << '\n' << event.ToString();

	if(keyMapper->keyMaps != nullptr)
		for (auto& keymap : keyMapper->keyMaps->keyMaps)
			if(keymap.CheckEvent(event))
				keyMapper->ExecuteKeymap(keymap);
}

#ifdef WIN32
void KeyMapper::ExecuteKeymap(KeyMap &keyMap) {

	auto key = winKeyCodes[keyMap.toKey];

	switch (keyMap.action)
	{
		case KeyMapAction::Hold:
			keybd_event(key,0,KEYEVENTF_SCANCODE,0);
			if(logEvents) std::cout << "[REMAP EVENT] KEY: " << (unsigned short) keyMap.key << " ACTION: HOLD " << keyMap.toKey << '\n';
			break;

		case KeyMapAction::Press:
			keybd_event(key,0,0,0);
			keybd_event(key,0, KEYEVENTF_KEYUP,0);
			if(logEvents) std::cout << "[REMAP EVENT] KEY: " << (unsigned short) keyMap.key << " ACTION: PRESS " << keyMap.toKey << '\n';
			break;

		case KeyMapAction::Toggle:

			keyMap.toggle = !keyMap.toggle;
			if(keyMap.toggle)	keybd_event(key,0,0,0);
			else 				keybd_event(key,0, KEYEVENTF_KEYUP,0);
			if(logEvents) std::cout << "[REMAP EVENT] KEY: " << (unsigned short) keyMap.key << " ACTION: TOGGLE " << keyMap.toKey << " TO " << keyMap.toggle << '\n';
			break;

		case KeyMapAction::Release:
			keybd_event(key,0, KEYEVENTF_KEYUP,0);
			if(logEvents) std::cout << "[REMAP EVENT] KEY: " << (unsigned short) keyMap.key << " ACTION: RELEASE " << keyMap.toKey << '\n';
			break;
	}
}
#else
void KeyMapper::ExecuteKeymap(KeyMap& keyMap) {
    switch (keyMap.action)
    {
        case KeyMapAction::Hold:
            xdo_send_keysequence_window_down(x, CURRENTWINDOW, keyMap.toKey.c_str(), 0);

            if(logEvents) std::cout << "[REMAP EVENT] KEY: " << (unsigned short) keyMap.key << " ACTION: HOLD " << keyMap.toKey << '\n';
            break;

        case KeyMapAction::Press:
            xdo_send_keysequence_window(x, CURRENTWINDOW, keyMap.toKey.c_str(), 0);
            if(logEvents) std::cout << "[REMAP EVENT] KEY: " << (unsigned short) keyMap.key << " ACTION: PRESS " << keyMap.toKey << '\n';
            break;

        case KeyMapAction::Toggle:

            keyMap.toggle = !keyMap.toggle;
            if(keyMap.toggle)	xdo_send_keysequence_window_down(x, CURRENTWINDOW, keyMap.toKey.c_str(), 0);
            else 			    xdo_send_keysequence_window_up(x, CURRENTWINDOW, keyMap.toKey.c_str(), 0);

            if(logEvents) std::cout << "[REMAP EVENT] KEY: " << (unsigned short) keyMap.key << " ACTION: TOGGLE " << keyMap.toKey << " TO " << keyMap.toggle << '\n';
            break;

        case KeyMapAction::Release:
            xdo_send_keysequence_window_up(x, CURRENTWINDOW, keyMap.toKey.c_str(), 0);

            if(logEvents) std::cout << "[REMAP EVENT] KEY: " << (unsigned short) keyMap.key << " ACTION: RELEASE " << keyMap.toKey << '\n';
            break;
    }
}
#endif

std::string KeyMapper::GetKeyMapAsString()
{
	if(keyMaps == nullptr)
		return  "No keymaps";

	std::stringstream text;
	for(auto& keymap : keyMaps->keyMaps)
		text << keymap.ToString() << '\n';

	return text.str();
}

std::vector<std::pair<int, std::string>> KeyMapper::GetDeviceList() {
    std::vector<std::pair<int, std::string>> devices;
    for(unsigned int i = 0; i < midi.getPortCount(); i++)
        devices.emplace_back(i, midi.getPortName(i));
    return devices;
}

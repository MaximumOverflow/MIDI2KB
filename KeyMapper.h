#ifndef MIDI2KB_KEYMAPPER_H
#define MIDI2KB_KEYMAPPER_H

#include <rtmidi/RtMidi.h>

#ifdef WIN32
#include <windows.h>
#include <unordered_map>
#else
extern "C" {
	#include <xdo.h>
}

#endif

#include "KeyMap.h"
#include "KeyEvent.h"
#include "Parsing/KeyMaps/KeyMapList.h"


class KeyMapper {
private:
    static KeyMapper* current;

	#ifdef WIN32
	static std::unordered_map<std::string, unsigned char> winKeyCodes;
	#else
	xdo_t * x;
	#endif
	RtMidiIn midi;
	KeyMapList* keyMaps = nullptr;

public:
	KeyMapper();
	~KeyMapper();

	std::string configPath;
	bool logEvents = false;
	bool enabled = true;

	void LoadKeymap(const std::string& configPath);
	void ReloadKeymap() { LoadKeymap(configPath); }
	void ClearKeymap();
	void SelectDevice();
	void SelectDevice(unsigned int device);
	bool HasActiveDevice() { return midi.isPortOpen(); }
	std::string GetKeyMapAsString();
	void ExecuteKeymap(KeyMap& keyMap);
	void MakeCurrent() { current = this; }
	std::vector<std::pair<int, std::string>> GetDeviceList();

	static void OnMidiInput(double timeStamp, std::vector<unsigned char> *message, void *userData);
	static KeyMapper* Current() { return current; };
};


#endif //MIDI2KB_KEYMAPPER_H

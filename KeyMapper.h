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


class KeyMapper {
private:
	#ifdef WIN32
	static std::unordered_map<std::string, unsigned char> winKeyCodes;
	#else
	xdo_t * x;
	#endif
	RtMidiIn midi;
	std::vector<KeyMap> keymaps;

public:
	KeyMapper();
	~KeyMapper();

	std::string configPath;
	bool logEvents = false;

	void LoadKeymap();
	void ShowKeymap();
	void ClearKeymap();
	void SelectDevice();
	void ExecuteKeymap(KeyMap& keyMap);

	static void OnMidiInput(double timeStamp, std::vector<unsigned char> *message, void *userData);
};


#endif //MIDI2KB_KEYMAPPER_H

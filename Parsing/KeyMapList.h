#ifndef MIDI2KB_KEYMAPLIST_H
#define MIDI2KB_KEYMAPLIST_H

#include "../KeyMap.h"

struct KeyMapList {
	std::vector<KeyMap> keyMaps;
	bool valid;

	explicit KeyMapList(const std::string& filePath);
};


#endif //MIDI2KB_KEYMAPLIST_H

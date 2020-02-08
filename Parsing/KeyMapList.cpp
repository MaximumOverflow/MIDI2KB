#include "KeyMapList.h"

#include <antlr4-runtime/antlr4-common.h>
#include <antlr4-runtime/antlr4-runtime.h>
#include "Grammar/KeyMapsLexer.h"
#include "Grammar/KeyMapsParser.h"

using namespace antlr4;

KeyMapList::KeyMapList(const std::string &filePath) {
	std::ifstream config(filePath);
	if(!config.is_open())
	{
		std::cout << "Keymap file could not be opened\n";
		return;
	}

	ANTLRInputStream inputStream(config);
	KeyMapsLexer lexer(&inputStream);
	CommonTokenStream tokens(&lexer);
	KeyMapsParser parser(&tokens);
	parser.keymaps();
	if(parser.getNumberOfSyntaxErrors())
	{
		valid = false;
		return;
	}

	auto context = parser.keymaps();
	for(auto& keyMapDef : context->keymap())
	{
		KeyMap keyMap;

		if(keyMapDef->trigger_condition()->any != nullptr) keyMap.condition = KeyMapCondition::Any;
		else if(keyMapDef->trigger_condition()->press != nullptr) keyMap.condition = KeyMapCondition::Press;
		else if(keyMapDef->trigger_condition()->release != nullptr) keyMap.condition = KeyMapCondition::Release;
		else if(keyMapDef->trigger_condition()->pressure != nullptr) keyMap.condition = KeyMapCondition::Pressure;

		keyMap.key = std::stoi(keyMapDef->key()->getText());
		if(keyMapDef->trigger_threshold()->exact != nullptr) keyMap.threshold = KeyMapCondition::Exact;
		else if(keyMapDef->trigger_threshold()->threshold_up != nullptr) keyMap.threshold = KeyMapCondition::ThresholdUp;
		else if(keyMapDef->trigger_threshold()->threshold_down != nullptr) keyMap.threshold = KeyMapCondition::ThresholdDown;

		keyMap.trigger = std::stoi(keyMapDef->value()->getText());
		keyMap.toKey = keyMapDef->destination()->getText();

		keyMaps.push_back(keyMap);
	}

	valid = true;
	config.close();
}

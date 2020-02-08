#include "KeyMapList.h"

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

	auto context = parser.keymaps();

	if(parser.getNumberOfSyntaxErrors())
	{
		valid = false;
		return;
	}

	for(auto& keyMapDef : context->keymap())
	{
		KeyMap keyMap;

		if(keyMapDef->trigger_condition()->any) keyMap.condition = KeyMapCondition::Any;
		else if(keyMapDef->trigger_condition()->press) keyMap.condition = KeyMapCondition::Press;
		else if(keyMapDef->trigger_condition()->release) keyMap.condition = KeyMapCondition::Release;
		else if(keyMapDef->trigger_condition()->pressure) keyMap.condition = KeyMapCondition::Pressure;

		keyMap.key = std::stoi(keyMapDef->key()->getText());
		if(keyMapDef->trigger_threshold()->exact) keyMap.threshold = KeyMapCondition::ThresholdExact;
		else if(keyMapDef->trigger_threshold()->threshold_up) keyMap.threshold = KeyMapCondition::ThresholdUp;
		else if(keyMapDef->trigger_threshold()->threshold_down) keyMap.threshold = KeyMapCondition::ThresholdDown;

		if(keyMapDef->trigger_action()->hold) keyMap.action = KeyMapAction::Hold;
		else if(keyMapDef->trigger_action()->press) keyMap.action = KeyMapAction::Press;
		else if(keyMapDef->trigger_action()->toggle) keyMap.action = KeyMapAction::Toggle;
		else if(keyMapDef->trigger_action()->release) keyMap.action = KeyMapAction::Release;

		if(keyMapDef->value()->any) keyMap.threshold = KeyMapCondition::ThresholdAny;
		else keyMap.trigger = std::stoi(keyMapDef->value()->getText());

		keyMap.toKey = keyMapDef->destination()->getText();

		keyMaps.push_back(keyMap);
	}

	valid = true;
	config.close();
}

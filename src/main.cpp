#include <SFML/Graphics.hpp>
#include "PresetIO.h"



int main()
{
	PresetIO preset;
	preset.PullDataFromFile("resources/presets/plant.txt");

	return 0;
}
#include "PresetIO.h"

using std::string, std::ifstream, std::getline;

void PresetIO::PullDataFromFile(string fileName)
{
	ifstream File(fileName);

	if (!File.is_open())
	{
		std::cerr << "ERROR: Could not open file " << fileName << std::endl;
		return;
	}

	string line;
	while (std::getline(File, line))
	{
		text.push_back(line); //Store each line in the vector
	}

	File.close();

	for (const auto& l : text)
	{
		std::cout << l << std::endl;
	}

}

void PresetIO::SplitRulesIntoAnArray() {}

void PresetIO::RunOverRulesRecursivly() {}

void PresetIO::SetClassMembers() 
{
	text;
}

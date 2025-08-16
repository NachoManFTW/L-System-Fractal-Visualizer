#pragma once
#ifndef PRESETIO_H
#define PRESETIO_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::string;

class PresetIO
{
	//Starting Rule
	string axiom;
	//Angle Rule
	string angle;
	//How many times it runs from axiom to end
	string iterations;
	//TBD
	string step;
	//Hold the lines from the .txt file
	std::vector<string> text;

	//Rules Arrays
	string firstRule  [200] = {};
	string secondRule [200] = {};
	string thirdRule  [200] = {};

	const std::vector<string> constants = {};
	
public:
	//Pull data from file
	void PullDataFromFile(string fileName);

	//Split production rules into its own array
	void SplitRulesIntoAnArray();

	//Create a recursive function that breaks the letters down to base
	void RunOverRulesRecursivly();

	//Set the members of the class via from file
	void SetClassMembers();

};

#endif


#pragma once

#include "Set.h"
#include "SetCollection.h"

#include <iostream>
#include <fstream>

enum class Mode {
	modeOne,
	modeTwo,
	unknown
};

class Program {
	Mode _mode = Mode::unknown;
	int _a = -1; 
	int _b = INT32_MAX;

	// Here, a set will be created using information from a binary file 
	Set* readFile(const char* fileName);

	// The set created using the readFile() function will be iterated using this function 
	void iterateGeneratedSet(const Set* set);

	// Depending on the type of the binary file, call one of the following functions to handle it
	Set* formatZero(int16_t N, std::ifstream& ifs); 
	Set* formatOne(int16_t N, std::ifstream& ifs);
	Set* formatTwo(int16_t N, std::ifstream& ifs);
	Set* formatThree(int16_t N, std::ifstream& ifs);
	Set* formatFour(int16_t N, std::ifstream& ifs);

	void addSetsToCollection(std::ifstream& ifs, SetCollection& collection, int16_t N);

	void chooseMode(); 

public:
	void run();
};
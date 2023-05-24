#pragma once

#include "UniquePointer.hpp"
#include "Set.h"
#include "MyString.h"

#include <iostream>
#include <fstream>

enum class Mode {
	modeOne,
	modeTwo
};

class Program {
	Mode _mode;

	// Here, a set will be created using information from a binary file 
	Set* readFile(const char* fileName);

	// The set created using the readFile() function will be iterated using this function 
	void iterateSet(const Set* set);

	Set* formatZero(int16_t N, std::ifstream& ifs); 
	Set* formatOne(int16_t N, std::ifstream& ifs);
	Set* formatTwo(int16_t N, std::ifstream& ifs);
	Set* formatThree(int16_t N, std::ifstream& ifs);
	Set* formatFour(int16_t N, std::ifstream& ifs);

public:
	Program(const Mode& mode);

	void run();
	

};
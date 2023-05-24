#include "Program.h"
#include "DynamicArray.hpp"

#include "StandardSet.h"
#include "DivisibilityCriterion.h"
#include "SetByDivisibility.h"
#include "SetCollection.h"

#include "SetIntersection.h"
#include "SetUnion.h"

Program::Program(const Mode& mode) : _mode(mode){
	
}

void Program::run() {
	Set* generatedSet = readFile("set.dat");
	iterateSet(generatedSet);
	delete[] generatedSet;
}

// Here, a set will be created using information from a binary file 
Set* Program::readFile(const char* fileName) {
	std::ifstream file(fileName, std::ios::binary);

	if (!file.is_open()) {
		return;
	}

	int16_t T, N;
	file.read((char*)&N, sizeof(N));
	file.read((char*)&T, sizeof(T));

	Set* set;

	switch (T) {
	case 0:
		set = formatZero(N, file);
		break;
	case 1:
		set = formatOne(N, file);
		break;

	case 2:
		set = formatTwo(N, file);
		break;

	case 3:
		set = formatThree(N, file);
		break;
	case 4:
		set = formatFour(N, file);
		break;
	}
	
	return set; 
	file.close();
}

// The set created using the readFile() function will be iterated using this function 
void Program::iterateSet(const Set* set) {

}

namespace {
	void readArrayFromFile(std::ifstream& ifs, int16_t N, DynamicArray<int32_t>& arr) {
		int32_t current;

		for (int i = 0; i < N; i++) {
			ifs.read((char*)&current, sizeof(current));
			arr.pushBack(current);
		}
	}
}

// A standard set of N numbers
Set* Program::formatZero(int16_t N, std::ifstream& ifs) {
	DynamicArray<int32_t> arr;
	int32_t current;

	for (int i = 0; i < N; i++) {
		ifs.read((char*)&current, sizeof(current));
		arr.pushBack(current);
	}
	return new StandardSet(arr);
}

// A set of the numbers which are not divisible by any of the given numbers
Set* Program::formatOne(int16_t N, std::ifstream& ifs) {
	DynamicArray<int32_t> arr;
	readArrayFromFile(ifs, N, arr);

	DivisibilityCriterion criterion(arr, 0);
	return new SetByDivisibility(criterion);
}

// A set of the numbers which are divisible by one of the given numbers
Set* Program::formatTwo(int16_t N, std::ifstream& ifs) {
	DynamicArray<int32_t> arr;
	readArrayFromFile(ifs, N, arr);

	DivisibilityCriterion criterion(arr, 1);
	return new SetByDivisibility(criterion);
}

namespace {

}

const int MAX_FILENAME_LEN = 100;

// N strings, each terminated by 0, paths to files specifying sets. The union of the sets represents the current set. 
Set* Program::formatThree(int16_t N, std::ifstream& ifs) {
	SetCollection collection; 
	char ch;

	for (int i = 0; i < N; i++) {
		// Read the current string
		char fileName[MAX_FILENAME_LEN];
		size_t ind = 0;

		while (ifs.get(ch)) {
			fileName[ind++] = ch;
		}

		Set* resultSet = readFile(fileName);
		switch
	}

	return new SetUnion(collection);
}

// N strings, each terminated by 0, paths to files specifying sets. The intersection of the sets represents the current set. 
Set* Program::formatFour(int16_t N, std::ifstream& ifs) {

}
#include "Iterator.h"
#include "../../NoNext/NoNext.h"

#include <iostream>

Iterator::Iterator(int32_t minVal, int32_t maxVal) : _minVal(minVal), _maxVal(maxVal){
	
}

// all numbers in interval [a,b]
void Iterator::iterateInModeOne() {
	while (1) {
		try {
			getNextValue(); // This function throws an exception if the next value is too high or doesn't exist
			std::cout << getValue() << " "; 
		}
		catch (NoNextException& e) {
			break;
		}
	}
}

// Generate on request 
void Iterator::iterateInModeTwo() {
	while (1) {
		std::cout << "\nType 'g' to generate the next number from the set:\n";
		char ch;
		std::cin >> ch; 

		if (ch == 'g') {
			try {
				getNextValue();
				std::cout << getValue()<< " ";
			}
			catch (NoNextException& e) {
				break;
			}
		}

		else {
			std::cout << "The command you have entered is invalid.\n";
		}
	}
}

void Iterator::iterateSet() {
	if (_maxVal != MAX_VALUE) {
		iterateInModeOne(); 
		return;
	}
	iterateInModeTwo();
}

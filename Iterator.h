#pragma once

#include <cstdint> // int32_t

// An upper limit for the iterator value 
// Necessary when operating in mode 2 
const int32_t MAX_VALUE = 100000; 

class Iterator {
protected:

	int32_t _minVal = -1;
	int32_t _maxVal = MAX_VALUE;

	// The principle of operation of both functions is the same for all derived classes,
	// the only difference is in the virtual functions getNextValue() and getValue()
	void iterateInModeOne(); // all numbers in interval [a,b]
	void iterateInModeTwo(); // Generate on request 

public:
	virtual int32_t getNextValue() = 0;
	virtual int32_t getValue() = 0;

	Iterator(int32_t minVal, int32_t maxVal);
	Iterator() = default;

	void iterateSet();
};
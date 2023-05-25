#pragma once

#include <cstdint> // int32_t

class Iterator {
protected:
	// Range if not specified, the max value is the max value for INT32_T
	int32_t _minVal = -1;
	int32_t _maxVal = INT32_MAX;

	// The principle of operation of both functions is the same for all derived classes,
	// the only difference is in the virtual functions getNextValue() and getValue()
	void iterateInModeOne(); // all numbers in interval [a,b]
	void iterateInModeTwo(); // Generate on request 
	// If _minVal == _maxVal, then the iteration mode is mode 2.
	// 

public:
	virtual int32_t getNextValue() = 0;
	virtual int32_t getValue() = 0;

	Iterator(int32_t minVal, int32_t maxVal);

	void iterateSet();
};
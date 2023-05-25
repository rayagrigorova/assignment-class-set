#pragma once

#include "Set.h"

const int32_t MAX_VALUE = INT32_MAX;

class Iterator {
protected:
	// Range if not specified, the max value is the max value for INT32_T
	int32_t _minVal = 0;
	int32_t _maxVal = MAX_VALUE;
public:
	virtual int32_t getNextValue() = 0;
	virtual int32_t getValue() = 0;

	Iterator(int32_t minVal, int32_t maxVal);
};
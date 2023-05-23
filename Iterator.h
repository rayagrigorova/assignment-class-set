#pragma once

#include "Set.h"

const int32_t MAX_VALUE = INT32_MAX;

class Iterator {
protected:
	// Range
	int32_t minVal = 0;
	int32_t maxVal = 0;
public:
	virtual int32_t getNextValue() = 0;
	virtual int32_t getValue() = 0;
};
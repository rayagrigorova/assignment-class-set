#pragma once

#include <cstdint> // int32_t

class Set {
public:
	virtual bool contains(int32_t num) const = 0;

	virtual Set* clone() const = 0;

	// Iterate the current set 
	virtual void iterateSet(int32_t minVal, int32_t maxVal) const = 0;
};
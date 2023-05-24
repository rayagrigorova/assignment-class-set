#pragma once

#include  "Iterator.h"
#include "SetIntersection.h"

class IntersectionIterator : public Iterator {
	const SetIntersection& _set;
	int32_t _val;
public:
	int32_t getNextValue() override;
	int32_t getValue() override;

	IntersectionIterator(int32_t minVal, int32_t maxVal, const SetIntersection& set);
};
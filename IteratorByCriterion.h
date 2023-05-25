#pragma once

#include "Iterator.h"
#include "SetByDivisibility.h"

class IteratorByCriterion : public Iterator {
	SetByDivisibility _set;
	int32_t _val = 0;

public:
	IteratorByCriterion(const SetByDivisibility& set, int32_t minVal, int32_t maxVal);
	int32_t getNextValue() override;
	int32_t getValue() override;
};
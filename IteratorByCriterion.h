#pragma once

#include "Iterator.h"
#include "SetByDivisibility.h"

class IteratorByCriterion : public Iterator {
	const SetByDivisibility& _set;
	int32_t _val = 0;

public:
	int32_t getNextValue() override;
	int32_t getValue() override;
};
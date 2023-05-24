#pragma once

#include  "Iterator.h"
#include "SetUnion.h"

class UnionIterator : public Iterator {
	const SetUnion& _set;
	int32_t _val; 
public:
	int32_t getNextValue() override;
	int32_t getValue() override;

	UnionIterator(int32_t minVal, int32_t maxVal, const SetUnion& set);
};
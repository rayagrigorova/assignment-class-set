#pragma once

#include  "../Iterator/Iterator.h"
#include "../../Sets/SetUnion/SetUnion.h"

class UnionIterator : public Iterator {
	const SetUnion& _set;
	int32_t _val; 

public:
	UnionIterator(int32_t minVal, int32_t maxVal, const SetUnion& set);

	int32_t getNextValue() override;
	int32_t getValue() override;
};

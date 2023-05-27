#pragma once

#include "Iterator.h"
#include "StandardSet.h"

class StandardIterator : public Iterator {
	// constant reference to the set - the iterator should exist at most as long as the set exists
	const StandardSet& _set;
	int currentInd = -1; 
public:
	StandardIterator(const StandardSet& set);
	StandardIterator(int32_t minVal, int32_t maxVal, const StandardSet& set);
	int32_t getNextValue() override;
	int32_t getValue() override;
};
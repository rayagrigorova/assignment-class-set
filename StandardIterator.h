#pragma once

#include "Iterator.h"
#include "StandardSet.h"

class StandardIterator : public Iterator {
	StandardSet _set;
	int currentInd = -1; 
public:
	StandardIterator(int32_t minVal, int32_t maxVal, const StandardSet& set);
	int32_t getNextValue() override;
	int32_t getValue() override;
};
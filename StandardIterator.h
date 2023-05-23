#pragma once

#include "Iterator.h"
#include "StandardSet.h"

class StandardIterator : public Iterator {
	const StandardSet& _set;
	int currentInd = 0; 
public:
	int32_t getNextValue() override;
	int32_t getValue() override;
};
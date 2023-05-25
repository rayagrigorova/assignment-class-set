#pragma once

#include "Set.h"
#include "DynamicArray.hpp"

class StandardIterator;

class StandardSet : public Set {
	DynamicArray<int32_t> _numbers;

public:
	void addNumber(int32_t number);
	bool contains(int32_t num) const override;

	StandardSet(); 
	StandardSet(const DynamicArray<int32_t>& numbers);

	Set* clone() const override;
	void iterateSet(int32_t minVal, int32_t maxVal) override;

	friend class StandardIterator;
};
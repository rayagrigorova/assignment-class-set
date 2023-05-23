#pragma once

#include "DynamicArray.hpp"

class IteratorByCriterion;

// A class that behaves like a function 
class DivisibilityCriterion {
	DynamicArray<int32_t> _numbers; 
	size_t _divisibleCount = 0; // This variable's value is the count of the numbers, by which a given number should be divisible 
	// in order to fulfill the criterion. For example, if the criterion is that a number shouldn't 
	// be divisible by any of the listed numbers, _divisibleCount = 0. 

public:
	// An object of type DivisibilityCriterion can be called like a function
	bool operator()(int32_t num) const;

	DivisibilityCriterion() = default;
	DivisibilityCriterion(const DynamicArray<int32_t>& numbers, size_t divisibleCount);
	void setDivisibleCount(size_t divisibleCount);

	void addNumber(int32_t number);

	friend class IteratorByCriterion;
};


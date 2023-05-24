#include "DivisibilityCriterion.h"

bool DivisibilityCriterion::operator()(int32_t num) const{
	size_t ctr = 0;
	unsigned size = _numbers.getSize();

	for (int i = 0; i < size; i++) {
		if (num % _numbers[i] == 0) {
			ctr++;
		}
	}

	return ctr == _divisibleCount;
}

DivisibilityCriterion::DivisibilityCriterion(const DynamicArray<int32_t>& numbers, size_t divisibleCount) {
	_numbers = numbers;
	_divisibleCount = divisibleCount;
}

void DivisibilityCriterion::setDivisibleCount(size_t divisibleCount) {
	_divisibleCount = divisibleCount;
}

void DivisibilityCriterion::addNumber(int32_t number) {
	_numbers.pushBack(number);
}

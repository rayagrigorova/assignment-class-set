#include "DivisibilityCriterion.h"
#include "../../Iterators/StandardIterator/StandardIterator.h"

bool DivisibilityCriterion::operator()(int32_t num) const{
	size_t ctr = 0;
	unsigned size = _numbers.getSize();
	StandardIterator iter(_numbers);

	for (int i = 0; i < size; i++) {
		int32_t current = iter.getNextValue();
		if (num % current == 0) {
			ctr++;
		}
	}

	return ctr == _divisibleCount;
}

DivisibilityCriterion::DivisibilityCriterion(const DynamicArray<int32_t>& numbers, size_t divisibleCount) : _numbers(numbers){
	setDivisibleCount(divisibleCount);
}

void DivisibilityCriterion::setDivisibleCount(size_t divisibleCount) {
	if (divisibleCount > _numbers.getSize()) {
		throw std::invalid_argument("DivisibleCount is too high");
	}

	_divisibleCount = divisibleCount;
}

void DivisibilityCriterion::addNumber(int32_t number) {
	_numbers.addNumber(number);
}

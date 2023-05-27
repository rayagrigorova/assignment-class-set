#include "StandardSet.h"
#include "StandardIterator.h"
#include "NoNext.h"

void StandardSet::addNumber(int32_t number) {
	_numbers.pushBack(number);
}

bool StandardSet::contains(int32_t num) const {
	size_t size = _numbers.getSize();

	for (int i = 0; i < size; i++) {
		if (_numbers[i] == num) {
			return true;
		}
	}
	return false;
}

StandardSet::StandardSet(const DynamicArray<int32_t>& numbers) {
	_numbers = numbers;
}

Set* StandardSet::clone() const {
	return new StandardSet(*this);
}

void StandardSet::iterateSet(int32_t minVal, int32_t maxVal) const{
	StandardIterator iter(minVal, maxVal, *this); 
	iter.iterateSet();
}
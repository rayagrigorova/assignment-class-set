#include "StandardSet.h"
#include "../../Iterators/StandardIterator/StandardIterator.h"
#include "../../NoNext/NoNext.h"

void StandardSet::addNumber(int32_t number) {
	if (!contains(number)) {
		_numbers.pushBack(number);
	}
}

bool StandardSet::contains(int32_t num) const {
	return _numbers.contains(num);
}

StandardSet::StandardSet(const DynamicArray<int32_t>& numbers) {
	size_t size = numbers.getSize();

	for (int i = 0; i < size; i++) {
		addNumber(numbers[i]);
	}
}

Set* StandardSet::clone() const {
	return new StandardSet(*this);
}

void StandardSet::iterateSet(int32_t minVal, int32_t maxVal) const{
	StandardIterator iter(minVal, maxVal, *this); 
	iter.iterateSet();
}

size_t StandardSet::getSize() const {
	return _numbers.getSize();
}

#include "StandardIterator.h"

int32_t StandardIterator::getNextValue() {
	currentInd++;
	if (currentInd > _set._numbers.getSize()) {
		throw std::out_of_range("The last value for the array has been reached");
	}

	return _set._numbers[currentInd];
}

int32_t StandardIterator::getValue() {
	return _set._numbers[currentInd];
}
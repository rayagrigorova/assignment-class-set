#include "StandardIterator.h"
#include "NoNext.h"

StandardIterator::StandardIterator(int32_t minVal, int32_t maxVal, const StandardSet& set) : Iterator(minVal, maxVal), _set(set){
	
}

int32_t StandardIterator::getNextValue() {
	currentInd++;
	if (currentInd > _set._numbers.getSize()) {
		throw NoNextException();
	}

	return _set._numbers[currentInd];
}

int32_t StandardIterator::getValue() {
	return _set._numbers[currentInd];
}
#include "StandardIterator.h"
#include "../../NoNext/NoNext.h"

StandardIterator::StandardIterator(const StandardSet& set) : _set(set) {
}

StandardIterator::StandardIterator(int32_t minVal, int32_t maxVal, const StandardSet& set) : Iterator(minVal, maxVal), _set(set){
	
}

int32_t StandardIterator::getNextValue() {
	if (currentInd + 1 >= _set._numbers.getSize()) {
		throw NoNextException();
	}
	currentInd++;
	return _set._numbers[currentInd];
}

int32_t StandardIterator::getValue() {
	if (currentInd < 0) {
		return INT32_MIN;
	}
	return _set._numbers[currentInd];
}

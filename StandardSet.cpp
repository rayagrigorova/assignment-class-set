#include "StandardSet.h"

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

StandardSet::StandardSet() {
	_type = SetType::standard;
}

StandardSet::StandardSet(const DynamicArray<int32_t>& numbers) {
	_numbers = numbers;
}
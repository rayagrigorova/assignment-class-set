#include "UnionIterator.h"
#include "../../NoNext/NoNext.h"

UnionIterator::UnionIterator(int32_t minVal, int32_t maxVal, const SetUnion& set) : _set(set), Iterator(minVal, maxVal) {
	_val = minVal - 1; // start iterating from the first possible value 
}

int32_t UnionIterator::getNextValue() {
	while (1) {
		_val++;

		if (_val > _maxVal) {
			throw NoNextException();
		}

		int size = _set._arr.size();

		// At least one of the sets should contain the value 
		for (int i = 0; i < size; i++) {
			if ((*_set._arr[i]).contains(_val)) {
				return _val;
			}
		}
	}
}

int32_t UnionIterator::getValue() {
	return _val;
}

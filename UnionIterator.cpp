#include "UnionIterator.h"

int32_t UnionIterator::getNextValue() {
	while (1) {
		_val++;
		int size = _set._arr.size();
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
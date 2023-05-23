#include "IntersectionIterator.h"

int32_t IntersectionIterator::getNextValue() {
	while (1) {
		_val++;
		int size = _set._arr.size();
		bool flag = true;

		for (int i = 0; i < size && flag; i++) {
			if (!(*_set._arr[i]).contains(_val)) {
				flag = false;
			}
		}

		if (flag) {
			return _val;
		}
	}
}

int32_t IntersectionIterator::getValue() {
	return _val;
}
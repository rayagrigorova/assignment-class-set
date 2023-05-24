#include "IntersectionIterator.h"

#include "NoNext.h"

int32_t IntersectionIterator::getNextValue() {
	while (1) {
		_val++;

		if (_val > _maxVal) {
			throw NoNextException();
		}

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

IntersectionIterator::IntersectionIterator(int32_t minVal, int32_t maxVal, const SetIntersection& set) : _set(set), Iterator(minVal, maxVal){
	_val = minVal;
}

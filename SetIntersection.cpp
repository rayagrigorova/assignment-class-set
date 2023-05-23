#include "SetIntersection.h"

bool SetIntersection::contains(int32_t num) const {
	size_t size = _arr.size();
	for (int i = 0; i < size; i++) {
		if (!(*_arr[i]).contains(num)) {
			return false;
		}
	}
	return true;
}

SetIntersection::SetIntersection() {
	_type = SetType::intersection;
}

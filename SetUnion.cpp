#include "SetUnion.h"

bool SetUnion::contains(int32_t num) const {
	size_t size = _arr.size();
	for (int i = 0; i < size; i++) {
		if ((*_arr[i]).contains(num)) {
			return true;
		}
	}
	return false;
}

SetUnion::SetUnion() {
	_type = SetType::Union;
}

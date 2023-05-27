#include "SetUnion.h"
#include "UnionIterator.h"
#include "NoNext.h"

SetUnion::SetUnion(const SetCollection& arr) : SetOperation(arr) {

}

bool SetUnion::contains(int32_t num) const {
	size_t size = _arr.size();

	// At least one of the sets should contain the given number 
	for (int i = 0; i < size; i++) {
		if ((*_arr[i]).contains(num)) {
			return true;
		}
	}
	return false;
}

Set* SetUnion::clone() const {
	return new SetUnion(*this);
}

void SetUnion::iterateSet(int32_t minVal, int32_t maxVal) const {
	UnionIterator iter(minVal, maxVal, *this);
	iter.iterateSet();
}

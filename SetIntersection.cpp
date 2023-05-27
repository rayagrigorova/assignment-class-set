#include "SetIntersection.h"
#include "IntersectionIterator.h"
#include "NoNext.h"

SetIntersection::SetIntersection(const SetCollection& arr) : SetOperation(arr) {

}

bool SetIntersection::contains(int32_t num) const {
	size_t size = _arr.size();

	// All sets should contain the given number 
	for (int i = 0; i < size; i++) {
		if (!(*_arr[i]).contains(num)) {
			return false;
		}
	}
	return true;
}

Set* SetIntersection::clone() const{
	return new SetIntersection(*this);
}

void SetIntersection::iterateSet(int32_t minVal, int32_t maxVal) const {
	IntersectionIterator iter(minVal, maxVal, *this);
	iter.iterateSet();
}

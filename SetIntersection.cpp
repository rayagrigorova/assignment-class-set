#include "SetIntersection.h"
#include "IntersectionIterator.h"
#include "NoNext.h"

bool SetIntersection::contains(int32_t num) const {
	size_t size = _arr.size();
	for (int i = 0; i < size; i++) {
		if (!(*_arr[i]).contains(num)) {
			return false;
		}
	}
	return true;
}

SetIntersection::SetIntersection(const SetCollection& arr) : SetOperation(arr){
	_type = SetType::intersection;
}

Set* SetIntersection::clone() const{
	return new SetIntersection(*this);
}

void SetIntersection::iterateSet(int32_t minVal, int32_t maxVal) const {
	IntersectionIterator iter(minVal, maxVal, *this);
	iter.iterateSet();
}

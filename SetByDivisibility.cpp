#include "SetByDivisibility.h"
#include "IteratorByCriterion.h"
#include "NoNext.h"

SetByDivisibility::SetByDivisibility(const DivisibilityCriterion& criterion) : SetByCriterion(criterion) {

}

void SetByDivisibility::iterateSet(int32_t minVal, int32_t maxVal) const {
	IteratorByCriterion iter(*this, minVal, maxVal);
	iter.iterateSet();
}

Set* SetByDivisibility::clone() const {
	return new SetByDivisibility(*this);
}
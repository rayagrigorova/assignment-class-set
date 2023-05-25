#include "SetByDivisibility.h"
#include "IteratorByCriterion.h"
#include "NoNext.h"

void SetByDivisibility::iterateSet(int32_t minVal, int32_t maxVal) const {
	IteratorByCriterion iter(*this, minVal, maxVal);
	iter.iterateSet();
}

Set* SetByDivisibility::clone() const {
	return new SetByDivisibility(*this);
}
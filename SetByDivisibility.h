#pragma once

#include "DivisibilityCriterion.h"
#include "SetByCriterion.hpp"

class IteratorByCriterion;

// A set which is a set by criterion, the criterion being divisibility by 
// N numbers from a given array (this type of set is created when T == 1 or T == 2) 
class SetByDivisibility : public SetByCriterion<DivisibilityCriterion> {
public:
	SetByDivisibility(const DivisibilityCriterion& criterion);

	void iterateSet(int32_t minVal, int32_t maxVal) const override;
	Set* clone() const override;

	friend class IteratorByCriterion;
};
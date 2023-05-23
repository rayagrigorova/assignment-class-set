#pragma once

#include "DivisibilityCriterion.h"
#include "SetByCriterion.hpp"

class IteratorByCriterion;

class SetByDivisibility : public SetByCriterion<DivisibilityCriterion> {
public:
	SetByDivisibility(const DivisibilityCriterion& criterion) : SetByCriterion(criterion){}

	friend class IteratorByCriterion;
};
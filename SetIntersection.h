#pragma once

#include "SetOperation.h"

class IntersectionIterator;

class SetIntersection : public SetOperation {
public:
	SetIntersection(const SetCollection& arr);

	bool contains(int32_t num) const override;
	Set* clone() const override;
	void iterateSet(int32_t minVal, int32_t maxVal) const override;

	friend class IntersectionIterator;
};
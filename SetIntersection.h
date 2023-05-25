#pragma once

#include "SetOperation.h"

class IntersectionIterator;

class SetIntersection : public SetOperation {
public:
	bool contains(int32_t num) const override;

	SetIntersection(const SetCollection& arr);

	Set* clone() const override;

	void iterateSet(int32_t minVal, int32_t maxVal) const override;

	friend class IntersectionIterator;
};
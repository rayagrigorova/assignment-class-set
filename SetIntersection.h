#pragma once

#include "SetOperation.h"

class IntersectionIterator;

class SetIntersection : public SetOperation {
public:
	bool contains(int32_t num) const override;

	SetIntersection(const SetCollection& arr);

	friend class IntersectionIterator;
};
#pragma once

#include "DynamicArray.hpp"
#include "SharedPtr.hpp"
#include "Set.h"

#include "SetByDivisibility.h"


class SetCollection {
	DynamicArray<SharedPtr<Set>> _sets;

public:
	void addSetByDivisibility(const DivisibilityCriterion& pred);

	SharedPtr<Set>& operator [](size_t ind);
	const SharedPtr<Set>& operator [](size_t ind) const;

	size_t size() const;
};
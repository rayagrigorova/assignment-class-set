#pragma once

#include "DynamicArray.hpp"
#include "SharedPtr.hpp"
#include "Set.h"

#include "SetByDivisibility.h"
#include "SetIntersection.h"
#include "SetUnion.h"
#include "StandardSet.h"

class SetCollection {
	DynamicArray<SharedPtr<Set>> _sets;

public:
	void addSetByDivisibility(const DivisibilityCriterion& pred);
	void addSetIntersection(const SetCollection& arr);
	void addSetUnion(const SetCollection& arr);
	void addStandardSet(const DynamicArray<int32_t>& arr);

	void addSetByDivisibility(const SetByDivisibility& set);
	void addSetIntersection(const SetIntersection& set);
	void addSetUnion(const SetUnion& set);
	void addStandardSet(const StandardSet& set);

	void add(const Set* set);

	SharedPtr<Set>& operator [](size_t ind);
	const SharedPtr<Set>& operator [](size_t ind) const;

	size_t size() const;
};
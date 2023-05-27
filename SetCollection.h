#pragma once

#include "DynamicArray.hpp"
#include "SharedPtr.hpp"
#include "Set.h"

class SetCollection {
	DynamicArray<SharedPtr<Set>> _sets;

public:
	void add(const Set* set);

	SharedPtr<Set>& operator [](size_t ind); // non-constant access
	const SharedPtr<Set>& operator [](size_t ind) const; // constant access

	size_t size() const;
};
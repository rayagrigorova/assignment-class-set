#pragma once

#include "../Utils/DynamicArray.hpp"
#include "../Utils/SharedPtr.hpp"
#include "../Sets/Set/Set.h"

class SetCollection {
	DynamicArray<SharedPtr<Set>> _sets;

public:
	void add(const Set* set);

	SharedPtr<Set>& operator [](size_t ind); // non-constant access
	const SharedPtr<Set>& operator [](size_t ind) const; // constant access

	size_t size() const;
};

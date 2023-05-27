#include "SetCollection.h"

#include "SetUnion.h"
#include "SetIntersection.h"
#include "StandardSet.h"
#include "SetByDivisibility.h"

SharedPtr<Set>& SetCollection::operator [](size_t ind) {
	if (ind > _sets.getSize()) {
		throw std::out_of_range("Index is out of range");
	}

	return _sets[ind];
}

const SharedPtr<Set>& SetCollection::operator [](size_t ind) const {
	if (ind > _sets.getSize()) {
		throw std::out_of_range("Index is out of range");
	}

	return _sets[ind];
}

size_t SetCollection::size() const {
	return _sets.getSize();
}

// Add a set of unknown type 
void SetCollection::add(const Set* set) {
	// Create a copy of the set using clone() - overridden by all derived classes 
	Set* toAdd = set->clone();
	SharedPtr<Set> ptr(toAdd);
	_sets.pushBack(ptr);
}
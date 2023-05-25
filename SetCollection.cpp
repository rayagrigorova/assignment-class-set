#include "SetCollection.h"

#include "SetUnion.h"
#include "SetIntersection.h"
#include "StandardSet.h"

void SetCollection::addSetByDivisibility(const DivisibilityCriterion& pred) {
	_sets.pushBack(SharedPtr<Set>(new SetByDivisibility(pred)));
}

void SetCollection::addSetIntersection(const SetCollection& arr) {
	_sets.pushBack(SharedPtr<Set>(new SetIntersection(arr)));
}

void SetCollection::addSetUnion(const SetCollection& arr) {
	_sets.pushBack(SharedPtr<Set>(new SetUnion(arr)));
}

void SetCollection::addStandardSet(const DynamicArray<int32_t>& arr) {
	_sets.pushBack(SharedPtr<Set>(new StandardSet(arr)));
}

SharedPtr<Set>& SetCollection::operator [](size_t ind) {

}

const SharedPtr<Set>& SetCollection::operator [](size_t ind) const {

}

size_t SetCollection::size() const {
	return _sets.getSize();
}

void SetCollection::addSetByDivisibility(const SetByDivisibility& set) {
	Set* copy = new SetByDivisibility(set);
	_sets.pushBack(SharedPtr<Set>(copy));
}

void SetCollection::addSetIntersection(const SetIntersection& set) {
	Set* copy = new SetIntersection(set);
	_sets.pushBack(SharedPtr<Set>(copy));
}

void SetCollection::addSetUnion(const SetUnion& set) {
	Set* copy = new SetUnion(set);
	_sets.pushBack(SharedPtr<Set>(copy));
}

void SetCollection::addStandardSet(const StandardSet& set) {
	Set* copy = new StandardSet(set);
	_sets.pushBack(SharedPtr<Set>(copy));
}

// Add a set of unknown type 
void SetCollection::add(const Set* set) {
	// Create a copy of the set using clone() - overridden for all derived classes 
	Set* toAdd = set->clone();
	_sets.pushBack(SharedPtr<Set>(toAdd));
}
#include "SetCollection.h"

#include "SetUnion.h"
#include "SetIntersection.h"

void SetCollection::addSetByDivisibility(const DivisibilityCriterion& pred) {
	Set* toAdd = new SetByDivisibility(pred);
	_sets.pushBack(SharedPtr<Set>(toAdd));
}

void SetCollection::addSetIntersection(const SetCollection& arr) {
	Set* toAdd = new SetIntersection(arr);
	_sets.pushBack(SharedPtr<Set>(toAdd));
}

void SetCollection::addSetUnion(const SetCollection& arr) {
	Set* toAdd = new SetUnion(arr);
	_sets.pushBack(SharedPtr<Set>(toAdd));
}

SharedPtr<Set>& SetCollection::operator [](size_t ind) {

}

const SharedPtr<Set>& SetCollection::operator [](size_t ind) const {

}

size_t SetCollection::size() const {
	return _sets.getSize();
}
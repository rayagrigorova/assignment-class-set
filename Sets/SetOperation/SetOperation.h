#pragma once

#include "../Set/Set.h"
#include "../../SetCollection/SetCollection.h"

// A base class for SetIntersection and SetUnion 
// Both SetIntersection and SetUnion contain a collection of sets 
class SetOperation : public Set {
protected:
	SetCollection _arr;
public:
	SetOperation(const SetCollection& arr) : _arr(arr) { }
	SetOperation() = default;
};

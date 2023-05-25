#pragma once

#include "Set.h"
#include "SetCollection.h"

class SetOperation : public Set {
protected:
	const SetCollection _arr;
public:
	SetOperation(const SetCollection& arr) : _arr(arr) { }
	SetOperation() = default;
};
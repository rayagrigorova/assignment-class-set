#pragma once

#include "SetOperation.h"

class UnionIterator;

class SetUnion: public SetOperation {
public:
	bool contains(int32_t num) const override;
	SetUnion(const SetCollection& arr);

	Set* clone() const override;

	friend class UnionIterator;
};
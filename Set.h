#pragma once

#include <cstdint> // int32_t

enum class SetType {
	standard, 
	intersection,
	Union, 
	byCriterion,
	unknown
};

class Set {
protected:
	SetType _type = SetType::unknown;
public:
	virtual bool contains(int32_t num) const = 0;

	SetType getType() const { return _type; }
};
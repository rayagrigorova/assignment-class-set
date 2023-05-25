#pragma once

#include "Set.h"

template <typename P>
class SetByCriterion : public Set {
protected:
	P _pred;

public:
	SetByCriterion(const P& pred);
	bool contains(int32_t num) const override;

	Set* clone() const override;
};

template <typename P>
SetByCriterion<P>::SetByCriterion(const P& pred) : _pred(pred){
	_type = SetType::byCriterion;
}

template <typename P>
bool SetByCriterion<P>::contains(int32_t num) const{
	return _pred(num);
	// _pred should be a function that accepts a number OR an object of a type 
	// that has an overloaded operator () 
}

template <typename P>
Set* SetByCriterion<P>::clone() const {
	return new SetByCriterion<P>(*this);
}
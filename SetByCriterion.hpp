#pragma once

#include "Set.h"

template <typename P>
class SetByCriterion : public Set {
protected:
	P _pred;

public:
	SetByCriterion(const P& pred);
	bool contains(int32_t num) const override;
};

template <typename P>
SetByCriterion<P>::SetByCriterion(const P& pred) : _pred(pred){

}

template <typename P>
bool SetByCriterion<P>::contains(int32_t num) const{
	// _pred should be a function that accepts a number OR an object of a type 
	// that has an overloaded operator () 
	return _pred(num);
}



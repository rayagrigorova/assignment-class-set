#include "IteratorByCriterion.h"
#include "NoNext.h"

int32_t IteratorByCriterion::getNextValue() {
	while (1) {
		_val++;

		if (_val > _maxVal) {
			throw NoNextException();
		}

		if (_set._pred(_val)) {
			return _val;
		}
	}
}

int32_t IteratorByCriterion::getValue() {
	return _val;
}

IteratorByCriterion::IteratorByCriterion(const SetByDivisibility& set, int32_t minVal, int32_t maxVal) : Iterator(minVal, maxVal), _set(set){

}
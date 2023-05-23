#include "IteratorByCriterion.h"

int32_t IteratorByCriterion::getNextValue() {
	// TBI - error handling 
	while (1) {
		_val++;
		if (_set._pred(_val)) {
			return _val;
		}
	}
}

int32_t IteratorByCriterion::getValue() {
	return _val;
}
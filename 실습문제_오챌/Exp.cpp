#include "Exp.h"

Exp::Exp() : b(1), idx(1) {}

Exp::Exp(int b) {
	this->b = b;
	idx = 1;
}

Exp::Exp(int b, int idx) {
	this->b = b;
	this->idx = idx;
}

int Exp::getValue() {

	int i;

	for (i = 0; i < idx; i++) {
		res = res * b;
	};
	return res;
}

int Exp::getBase() {
	return b;
}

int Exp::getExp() {
	return idx;
}


bool Exp::equals(Exp num) {

	if (this->getValue() == num.getValue())
		return true;
	else
		return false;
}
#include "DefaultNumber.h"
#include <iostream>


DefaultNumber::DefaultNumber(long initialValue) : value(initialValue) {};
DefaultNumber::~DefaultNumber() {};


void DefaultNumber::printValue() const {
	std::cout << this->value << "\n";
};

long DefaultNumber::getValue() const
{
	return this->value;
};

void DefaultNumber::setValue(long newValue)
{
	this->value = newValue;
};


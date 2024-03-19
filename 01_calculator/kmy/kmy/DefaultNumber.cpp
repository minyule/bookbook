#include "DefaultNumber.h"
#include <iostream>


DefaultNumber::DefaultNumber(float initialValue) : value(initialValue) {};
DefaultNumber::~DefaultNumber() {};


void DefaultNumber::printValue() const {
	std::cout << this->value << "\n";
};

float DefaultNumber::getValue() const
{
	return this->value;
};

void DefaultNumber::setValue(float newValue)
{
	this->value = newValue;
};


float DefaultNumber::operator+(DefaultNumber& otherNumber) const
{
	return this->value + otherNumber.value;
};

float DefaultNumber::operator-(DefaultNumber& otherNumber) const
{
	return this->value - otherNumber.value;
};

float DefaultNumber::operator*(DefaultNumber& otherNumber) const
{
	return this->value * otherNumber.value;
};

float DefaultNumber::operator/(DefaultNumber& otherNumber) const
{
	if (otherNumber.value == 0) { throw  std::exception("��� : ������ ���ڰ� 0�̸� �ȵ�\n"); }
	return this->value / otherNumber.value;
};


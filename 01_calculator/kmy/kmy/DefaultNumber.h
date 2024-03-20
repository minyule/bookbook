#pragma once
class DefaultNumber
{
public:
	DefaultNumber(float initValue = 0);
	~DefaultNumber();

	void printValue() const;
	float getValue() const;
	void setValue(float newValue);

	float operator+(DefaultNumber& otherNumber) const;
	float operator-(DefaultNumber& otherNumber) const;
	float operator*(DefaultNumber& otherNumber) const;
	float operator/(DefaultNumber& otherNumber) const;

private:
	float value;

};


#pragma once
class DefaultNumber
{
public:
	DefaultNumber(long initValue = 0);
	~DefaultNumber();

	void printValue() const;
	long getValue() const;
	void setValue(long newValue);

private:
	long value;

};


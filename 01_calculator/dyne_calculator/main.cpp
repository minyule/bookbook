#include <iostream>
#include <cmath>

using namespace std;

float calculate(int opt, float a, float b)
{
	switch(opt)
	{
		case 1:
			return a+b;
		case 2:
			return a - b;
		case 3:
			return a * b;
		case 4:
			return a / b;
		case 5:
			return pow(a, b);
		default:
			cout << "invalid option" << endl;
			return 0;
	}
}


int main(){

	int a = 0;
	cout << "Choose Operation: \n";
	cout << "1. +   2. -   " << endl;
	cout << "3. *   4. /   5. ^    :" << endl;
	cin >> a;
	if ((a < 1) or (a > 5)) {
		cout << "invalid operation" << endl;
	}
	else {
		float i, j;

		cout << "type two numbers, seperated with space: " << endl;
		cin >>  i >> j;
		cout << "Result is: " << calculate(a, i, j);
	}
	return 0;
}

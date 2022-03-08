// Ex63func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// passing parameters by reference -  also discuss passing parms by value

#include <iostream>
using namespace std;

void duplicate(int& a, int& b, int& c)
{
	a *= 2;
	b *= 2;
	c *= 2;
}

int main()
{
	int x = 1, y = 3, z = 7;

	cout << "x=" << x << ", y=" << y << ", z=" << z << endl;

	duplicate(x, y, z);

	cout << "x=" << x << ", y=" << y << ", z=" << z << endl;

	return 0;
}
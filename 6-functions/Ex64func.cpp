// Ex64func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// default values in functions

#include <iostream>
using namespace std;

int divide(int a, int b = 2)
{
	int r;
	r = a / b;
	return (r);
}

int main()
{
	cout << divide(12) << '\n';
	cout << divide(20, 4) << '\n';
	return 0;
}
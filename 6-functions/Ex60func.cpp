// Ex60func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// function example

#include <iostream>
using namespace std;

// define a new function (Note: define before use)
int addition(int a, int b)
{
	int r;
	r = a + b;
	return r;
}

int main()
{
	int z;
	z = addition(5, 3);
	cout << "The result is " << z << endl;
}


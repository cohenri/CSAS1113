// Ex71enum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	enum grades { A, B, C, D, F };
	grades gradeReceived;

	char ch1;

	cout << endl;
	cout << "Enter students grade: A, B, C, D, or F (one char only)  " << endl;
	cout << endl;

	//read the input from the keyboard
	cin >> ch1;
	while (ch1 != 'A' && ch1 != 'B' && ch1 != 'C' && ch1 != 'D' && ch1 != 'F') {
		cout << endl;
		cout << "Illegal Input - enter grade A - F only (1 char)" << endl;
		cin >> ch1;
	}

	switch (ch1)
	{
	case 'A':
		gradeReceived = A;
		break;
	case 'B':
		gradeReceived = B;
		break;
	case 'C':
		gradeReceived = C;
		break;
	case 'D':
		gradeReceived = D;
		break;
	case 'F':
		gradeReceived = F;
		break;
	default:
		cout << "Illegal input. " << endl;
	}

	cout << endl;
	cout << "Determining grade the student received" << endl;
	cout << endl;

	switch (gradeReceived)
	{
	case A:
		cout << "A - Excellent" << endl;
		break;
	case B:
		cout << "B - Very Good" << endl;
		break;
	case C:
		cout << "C - Satisfactory" << endl;
		break;
	case D:
		cout << "D - Poor" << endl;
		break;
	case F:
		cout << "F - Fail" << endl;
		break;
	default:
		cout << "Illegal grade. No grade received. " << endl;
	}

	cout << endl;
}

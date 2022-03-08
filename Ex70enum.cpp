// Ex70enum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
 
	enum courses {BIOLOGY, CALCULUS, PYTHON, SOCIOLOGY, PHYSICS, CHEMISTRY, HISTORY, PSYCHOLOGY};
	courses registered;

	char ch1, ch2;

	cout << endl;
	cout << "Enter one of the following courses (at least 2 characters) to register for the course : " << endl;
	cout << "BIOLOGY, CALCULUS, PYTHON, SOCIOLOGY, PHYSICS, CHEMISTRY, HISTORY, PSYCHOLOGY" << endl;
	cout << endl;

	//read the input from the keyboard
	cin >> ch1 >> ch2;
	
	switch (ch1) 
	{
	case 'b':
		registered = BIOLOGY;
		break;
	case 'c':
		if (ch2 == 'a')
			registered = CALCULUS;
		else
			registered = CHEMISTRY;
		break;
	case 'p':
		if (ch2 == 'h') 
			registered = PHYSICS;
		else 
			registered = PSYCHOLOGY;
	    break;
	case 's':
		registered = SOCIOLOGY;
		break;
	case 'h':
		registered = HISTORY;
		break;
	default:
		cout << "Illegal input. " << endl;
	}

	cout << endl;
	cout << "You registered for the following class" << endl;
	cout << endl;

	switch (registered)
	{
	case BIOLOGY:
		cout << "Biology" << endl;
		break;
	case CALCULUS:
		cout << "Calculus" << endl;
		break;
	case PYTHON:
		cout << "Python" << endl;
		break;
	case SOCIOLOGY:
		cout << "Sociology" << endl;
		break;
	case PHYSICS:
		cout << "Physics" << endl;
		break;
	case CHEMISTRY:
		cout << "Chemistry" << endl;
		break;
	case HISTORY:
		cout << "History" << endl;
		break;
	case PSYCHOLOGY:
		cout << "Psychology" << endl;
		break;
	default:
		cout << "Illegal input. No registration was done. " << endl;
	}

	cout << endl;
}


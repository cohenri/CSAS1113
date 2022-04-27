// Ex125pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
A pointer that stores the address of another pointer is called a pointer to pointer.
In this program a pointer stores the address of another pointer, 
and then that 2nd pointer stores the address of one variable.
*/

#include <iostream>  
using namespace std;

int main()
{
    // Sample program to show  pointer to pointer  
    int   a = 10;
    int  *p = &a; // stores the address of integer a  
    int **q = &p; // stores the address of pointer p  

    cout << endl;
    cout << "Address of a : " << p << "\n";
    cout << endl;
    cout << "Address of p : " << q << "\n";

    cout << endl;
    cout << "Value of p : " << p << " " << *q << "\n"; // All are same  

    cout << endl;
    cout << "Value of a : " << a << " " << *p << " " << **q << "\n"; // All are same  

    return 0;
}
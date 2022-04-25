// Ex120pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Demonstrate the use of pointers

#include <iostream>  
using namespace std;

int main()
{
    // Sample program to show pointers concepts.  

    int a = 20; // integer variable a  
    int *p;     // pointer to an integer  
    p = &a;     // p now holds address of a.  

    cout << endl;
    cout << "Address of a : " << p << "\n";

    cout << endl;
    cout << "Value of a based on pointer: " << *p << "\n";

    cout << endl;
    cout << "Value of a based on variable name: " << a << "\n";

    int b = *p;  // dereferencing using *, now b has the same value as a.  

    cout << endl;
    cout << "Value of b based on defreferencing pointer: " << b << "\n";

    return 0;
}
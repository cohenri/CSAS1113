// Ex124pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Arithmetic operations like++, –, +, – can be operated on pointer variables.///

#include <iostream>  
using namespace std;

int main()
{
    // Sample program to show call by reference by pointers  
    int a[3] = { 1,2,3 };
    int* p = &a[0];
    
    p = p + 1; // point to next integer  
    cout << endl;
    cout << "Value of 2nd element : " << *p << "\n";

    p--;
    cout << endl;
    cout << "Value of 1st element : " << *p << "\n";

    cout << endl;
    return 0;
}
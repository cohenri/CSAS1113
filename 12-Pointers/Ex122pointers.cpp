// Ex122pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//An array of pointers mean that there is an array that stores addresses of a different variable.

#include <iostream>  
using namespace std;

int main()
{
    // Sample program to show call by reference by pointers  
    int a[10];
    int i, j;
    for (i = 0; i < 10; i++)
        a[i] = i + 1;
    cout << endl;
    cout << "Without pointers :\n";
    for (i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << "\n";

    int *p[10]; // pointers to each member of array of a  

    for (i = 0; i < 10; i++)
        p[i] = &a[i];
    cout << endl;
    cout << "Using pointers :\n";
    for (i = 0; i < 10; i++)
        cout << *p[i] << " ";

    cout << endl;
    return 0;
}
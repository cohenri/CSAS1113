// Ex123pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//The name of the array is the starting address of the array.So, consider int a[10]; a, & a, & a[0] signify the same thing.

//To access ith index in the array it can be done using* (a + i), * (i + a), a[i] or i[a].All are same.

#include <iostream>
using namespace std;

int main()
{
    // Sample program to show call by reference by pointers
    int a[10];
    int i, j;
    for (i = 0; i < 10; i++)
        a[i] = i + 1;
    
    //All point to the same address
    cout << endl;
    cout << a << " " << &a << " " << &a[0] << "\n";

    // All give the same value that is the value contained at a[1]
    cout << endl;
    cout << *(a + 1) << " " << *(1 + a) << " " << a[1] << " " << 1[a] << "\n";

    cout << endl;
    return 0;
}
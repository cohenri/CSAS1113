// Ex121pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Demonstrate pointers used in calling by reference.
//
/* 
   In call by reference, when a variable is passed as a reference and
   then changes are made to it inside the function body, the changes are also 
   reflected in the main function.

   This program handles the swapping of two numbers using pointers.
*/
#include <iostream>  
using namespace std;

void swap_(int *x, int *y)
{
    int temp = *x; // store the value stored at address pointed by x.  
    *x = *y;       // change value at address pointed by x to value at address y  
    *y = temp;     // change value at address pointed by y to value that was present at address of x at start.  
}
int main()
{
    // Sample program to show call by reference by pointers  
    int a = 20; // integer variable a  
    int b = 30; // integer variable b  

    cout << endl;
    cout << "Before swapping : " << a << " " << b << "\n";

    swap_(&a, &b); // swap function  

    cout << endl;
    cout << " After swapping : " << a << " " << b << "\n";

    return 0;
}
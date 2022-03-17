// Ex66func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//demonstrate scope of variables in c++
#include <iostream>
using namespace std;

int func1(int, int, int);
int g = 101010;

int main()
{
    cout << endl;
    cout << "Demonstrate variable scope" << endl;

    cout << endl;
    cout << "In main" << endl;
    int a, b, c;
    int myVal;

    a = 10;
    b = 20;
    c = 30;

    cout << endl;
    cout << "  g = " << g << endl;

    cout << "  a = " << a << endl;
    cout << "  b = " << b << endl;
    cout << "  c = " << c << endl;

    myVal = func1(a, b, c);

    cout << endl;
    cout << "Back in main" << endl;

    cout << endl;

    cout << "  myVal = " << myVal << endl;

    cout << "  g = " << g << endl;

    cout << "  a = " << a << endl;
    cout << "  b = " << b << endl;
    cout << "  c = " << c << endl;

}

int func1(int a, int b, int c) {
    cout << endl;
    cout << "Inside func1" << endl;
    
    int x, y, z;

    x = 70;
    y = 80;
    z = 90;

    cout << endl;
    cout << "  x = " << x << endl;
    cout << "  y = " << y << endl;
    cout << "  z = " << z << endl;

    a = 777;
    b = 888;
    c = 999;

    cout << endl;
    cout << "  g = " << g << endl;
    cout << "  a = " << a << endl;
    cout << "  b = " << b << endl;
    cout << "  c = " << c << endl;

    return z;

}
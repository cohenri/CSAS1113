// Ex82array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int myArray[4][3] = { {2, 3, 1},
                          {15, 25, 13},
                          {20, 4, 7},
                          {11, 18, 14} };

    //Process the entire array
    
    cout << endl << "The array with initial values" << endl;
    //Print the array
    for (int row = 0; row < 4; row++) {
        cout << endl;
        for (int col = 0; col < 3; col++)
            cout << myArray[row][col] << "  ";
        cout << endl;
    }

    
    //Process a single element
    myArray[2][1] = 9999;

    cout << endl << "The array with a single value changed" << endl;
    //Print the array - again
    for (int row = 0; row < 4; row++) {
        cout << endl;
        for (int col = 0; col < 3; col++)
            cout << myArray[row][col] << "  ";
        cout << endl;
    }


    //Process a single row at a time, called row processing
    //An example initializing row number 4 (fifth row) to 0:
    int row = 3;
    for (int col = 0; col < 3; col++)
        myArray[row][col] = 0;

    cout << endl << "The array with row 4 changed" << endl;
    //Print the array - again
    for (int row = 0; row < 4; row++) {
        cout << endl;
        for (int col = 0; col < 3; col++)
            cout << myArray[row][col] << "  ";
        cout << endl;
    }


    //Process a single column at a time, called column processing
    //In class - Set only the full 2nd column to 888   

}

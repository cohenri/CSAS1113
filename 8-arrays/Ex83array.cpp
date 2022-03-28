// Ex83array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//multi (three) dimensional array
#include <iostream>
using namespace std;

int main()
{
    int myArray[2][4][3] = { { {2, 3, 1},
                               {15, 25, 13},
                               {20, 4, 7},
                               {11, 18, 14} },
                             { {202, 203, 201},
                               {315, 325, 313},
                               {420, 404, 407},
                               {511, 518, 514}  } };

    //Process the entire array

    cout << endl << "The array with initial values" << endl;
    //Print the array
    for (int ary = 0; ary < 2; ary++){
        cout << endl;

        for (int row = 0; row < 4; row++) {
            cout << endl;

            for (int col = 0; col < 3; col++)
                cout << myArray[ary][row][col] << "  ";

            cout << endl;
        }
    }


    //Process a single element
    myArray[0][2][1] = 9999;


    cout << endl << "The array with a single value changed" << endl;
    //Print the array - again
    for (int ary = 0; ary < 2; ary++) {
        cout << endl;
       
        for (int row = 0; row < 4; row++) {
            cout << endl;
        
            for (int col = 0; col < 3; col++)
                cout << myArray[ary][row][col] << "  ";
            
            cout << endl;
        }
    }

}

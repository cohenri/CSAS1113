// Ex81array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printMatrix(double mySales[10]);

int main()
{
    double sales[10];
    double sum, average, counter;
    int maxIndex;
    double largestSale;

    //initialize the array
    for (int index = 0; index < 10; index++) {
        sales[index] = 0.0;
    }

    //print the array
    printMatrix(sales);

    //read data into array from keyboard
    // for(int index = 0; index < 10; index++) {
    //     cin >> sales[index];
    // }

    //assign new values to array
    sales[0] = 12.50; sales[1] = 8.35;  sales[2] = 19.60; sales[3] = 25.00; sales[4] = 14.00;
    sales[5] = 39.43; sales[6] = 35.90; sales[7] = 98.23; sales[8] = 66.65; sales[9] = 35.64;

    //print the array
    //print the array
    printMatrix(sales);

    //find the sum and average of the array
    sum = 0;
    average = 0;
    counter = 0;
    for (int index = 0; index < 10; index++) {
        sum = sum + sales[index];
        counter = counter + 1;
    }
    average = sum / counter;
    cout << endl;
    cout << "sum = " << sum << endl;
    cout << "average = " << average << endl;

    //find the largest element in the array
    maxIndex = 0;
    for (int index = 0; index < 10; index++) {
        if (sales[maxIndex] < sales[index]) {
            maxIndex = index;
        }
    }
    largestSale = sales[maxIndex];
    cout << endl;
    cout << "largest sale = " << largestSale << endl;

}


void printMatrix(double mySales[]) {
    
    //print the array
    cout << endl;
    cout << "Contents of array" << endl;
    for (int index = 0; index < 10; index++) {
        cout << mySales[index] << "  ";
    }
    cout << endl;
    
}

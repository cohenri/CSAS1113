// Ex102oopCar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

class Car
{

private:
    string brand;
    string model;
    int year;

public:
    void printcar() const;
    void setcar(string, string, int);

};

int main()
{
    Car Samscar;
    Car Bobscar;

    // placeholder variables (local to the main function)
    string carbrand;
    string carmodel;
    int caryear;

    cout << endl << " Sam's car: " << endl;
    carbrand = "BMW";
    carmodel = "i300 x-drive";
    caryear = 2003;

    Samscar.setcar(carbrand, carmodel, caryear);
    Samscar.printcar();


    cout << endl << " Bob's car: " << endl;
    carbrand = "Lexus";
    carmodel = "is 250 awd";
    caryear = 2017;
    
    Bobscar.setcar(carbrand, carmodel, caryear);
    Bobscar.printcar();

    return 0;
}

void Car::printcar() const
{
    cout << endl;
    cout << brand << "  " << model << "  " << year << endl;
}

void Car::setcar(string carbrand, string carmodel, int caryear)
{
    brand = carbrand;
    model = carmodel;
    year = caryear;
}
// Ex110oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// C++ program to demonstrate inheritance

#include <iostream>
using namespace std;

// base class
class Animal {

public:
    Animal() {
        cout << "Animal constructor executed";
    }

    ~Animal() {
        cout << "Animal destructor executed";
    }

    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : public Animal {

public:
    Dog() {
        cout << "Dog constructor executed";
    }

    ~Dog(){
        cout << "Dog destructor executed";
    }

    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {

    Dog myDog;

    cout << endl;
    cout << "demonstrate inheritance" << endl;
    cout << endl;

    myDog.bark();
    myDog.eat();
    myDog.sleep();

}

// todo: add constructors and trace through what happens
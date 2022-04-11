// Ex107oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Line {

    public:
        void setLength(double len);
        double getLength(void);
        Line();  // This is the constructor

    private:
        double length;
};

// Member functions definitions including constructor
Line::Line(void) {
    cout << endl << "Object is being created" << endl;
}

void Line::setLength(double len) {
    length = len;
}

double Line::getLength(void) {
    return length;
}

// Main function for the program
int main() {

    Line line; // Instantiate object

    // set line length
    line.setLength(6.0);
    cout << endl << "Length of line : " << line.getLength() << endl;

    return 0;
}
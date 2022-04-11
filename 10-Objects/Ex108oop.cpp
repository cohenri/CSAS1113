// Ex108oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Line {

    public:
        void setLength(double len);
        double getLength(void);
        Line(double len);  // This is the constructor
        Line(); // This is default constructor

    private:
        double length;
};

Line::Line() {
    cout << "my default constructor";
}

// Member functions definitions including parameterized constructor
Line::Line(double len) {
    cout << endl << "Object is being created, length = " << len << endl;
    length = len;
}

void Line::setLength(double len) {
    length = len;
}
double Line::getLength(void) {
    return length;
}

// Main function for the program
int main() {
    Line line(10.0);

    // get initially set length.
    cout << endl << "Length of line : " << line.getLength() << endl;

    // set line length again
    line.setLength(6.0);
    cout << endl << "Length of line : " << line.getLength() << endl;

    return 0;
}
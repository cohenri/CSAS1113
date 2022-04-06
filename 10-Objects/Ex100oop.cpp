// Ex100oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Demo of Object Oriented Programming
#include <iostream>
using namespace std;

class clockType
{
public:
    void setTime(int, int, int);
    void getTime(int&, int&, int&) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType&) const;

private:
    int hr;
    int min;
    int sec;

};


int main()
{
    clockType myClock;
    clockType yourClock;

    int hours, minutes, seconds;

    //set the time of myClock
    myClock.setTime(9, 3, 45);

    // print the time of myClock
    cout << endl;
    cout << " myClock time: ";
    myClock.printTime();
    cout << endl;

}//end main


void clockType::setTime(int hours, int minutes, int seconds)
{
    hr = hours;
    min = minutes;
    sec = seconds;
}

void clockType::getTime(int& hours, int& minutes, int& seconds) const
{
    hours   = hr;
    minutes = min;
    seconds = sec;
}

void clockType::printTime() const
{
    cout << hr << ":";
    cout << min << ":";
    cout << sec << endl;
}

void clockType::incrementHours()
{
    hr++;
    if (hr > 23) hr = 0;
}

void clockType::incrementMinutes()
{
    min++;
    if (min > 59) {
        min = 0;
        incrementHours();
    }
}

void clockType::incrementSeconds()
{
    sec++;
    if (sec > 59) {
        sec = 0;
        incrementMinutes();
    }
}

bool clockType::equalTime(const clockType& otherClock) const
{
    return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}
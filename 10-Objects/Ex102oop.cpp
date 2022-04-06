// Ex102oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Demo of Object Oriented Programming and Uninitialized Variables!
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
    bool clocksEqual;

    //set the time of myClock
    myClock.setTime(9, 3, 45);

    // print the time of myClock
    cout << endl;
    cout << " myClock time: ";
    myClock.printTime();
    cout << endl;

    //print the time of yourClock
    cout << endl;
    cout << " yourClock time: ";
    yourClock.printTime();
    cout << endl;
    
    //set the time of yourClock
    yourClock.setTime(11, 15, 22);
 
    //print the time of yourClock
    cout << endl;
    cout << " yourClock time: ";
    yourClock.printTime();
    cout << endl;
    
    //compare myClock and yourClock
    cout << endl;
    clocksEqual = myClock.equalTime(yourClock);
        if (clocksEqual)
        cout << "Clocks have same time" << endl;
    else
        cout << "Clocks do not have the same time" << endl;
    
    //ask user to supply time in hrs, mins, secs
    cout << endl;
    cout << "Enter the time in hrs, mins, aand secs: ";
    cin >> hours >> minutes >> seconds;
    cout << endl;

    //set the time of myClock using the values just received from user
    myClock.setTime(hours, minutes, seconds);

    //print the time of yourClock
    cout << endl;
    cout << " myClock time: ";
    myClock.printTime();
    cout << endl;

    //increment the time of myClock by 1 second
    myClock.incrementSeconds();

    //print the time of yourClock
    cout << endl;
    cout << " after incrementing, myClock time: ";
    myClock.printTime();
    cout << endl;

    //retrieve the new time of myClock
    myClock.getTime(hours, minutes, seconds);

    //print the values of hours, minutes, seconds
    cout << " hours = " << hours << " minutes = " << minutes << " seconds = " << seconds << endl;

    return 0;

}//end main


void clockType::setTime(int hours, int minutes, int seconds)
{
    hr = hours;
    min = minutes;
    sec = seconds;
}

void clockType::getTime(int& hours, int& minutes, int& seconds) const
{
    hours = hr;
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
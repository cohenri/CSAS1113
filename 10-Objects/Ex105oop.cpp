// Ex105oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// Create a Bank Account class with some attributes
// 
// *****************************************
// Note: only change from last example is that member data is now private - What happens???
//******************************************

class BANKACCOUNT {
private: 
    string acctType;
    bool acctEnabled;
    int custId;
    double balance;

};

int main() {

    // Create an object of Bank Account
    BANKACCOUNT baObj1;

    baObj1.acctType = "Checking";
    baObj1.acctEnabled = true;
    baObj1.custId = 000001;
    baObj1.balance = 1500.00;

    // Create an object of Bank Account
    BANKACCOUNT baObj2;

    baObj2.acctType = "Savings";
    baObj2.acctEnabled = true;
    baObj2.custId = 000002;
    baObj2.balance = 1840.00;

    // Print attribute values
    cout << endl;
    cout << baObj1.acctType << " " << baObj1.acctEnabled << " " << baObj1.custId << " " << baObj1.balance << endl;
    cout << endl;
    cout << baObj2.acctType << " " << baObj2.acctEnabled << " " << baObj2.custId << " " << baObj2.balance << endl;
    cout << endl;

    return 0;
}
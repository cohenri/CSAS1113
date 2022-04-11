// Ex106oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// Create a Bank Account class with some attributes
// 
// ******************************************
// Note: member data is private - Example of "DATA ABSTRACTION"
// 
// But we've also added public member functions to access the private member data
// 
//*******************************************

class BANKACCOUNT {
private:
    string acctType;
    bool acctEnabled;
    int custId;
    double balance;

public:
    void assignDataToObject(string, bool, int, double);
    void printBankAcctObject();

};

int main() {

    // Create an object of Bank Account
    BANKACCOUNT baObj1;

    baObj1.assignDataToObject("Checking", true, 000001, 1500.00);

    // Create another object of Bank Account
    BANKACCOUNT baObj2;

    baObj2.assignDataToObject("Savings", true, 000002, 1840.00);


    // Print attribute values
    baObj1.printBankAcctObject();

    baObj2.printBankAcctObject();

    return 0;
}

void BANKACCOUNT::assignDataToObject(string newAcctType, bool newAcctEnabled, int newCustID, double newBalance) {

    acctType = newAcctType;
    acctEnabled = newAcctEnabled;
    custId = newCustID;
    balance = newBalance;

}

void BANKACCOUNT::printBankAcctObject() {

    cout << endl;
    cout << acctType << " " << acctEnabled << " " << custId << " " << balance << endl;
    cout << endl;

}

// customer.h
#include <iostream>
#include <iomanip>
#include <string>
//#include <Windows.h>

#include "user.h"

class customer : public user {
public:
    customer();
    ~customer();
    void getLogin();
    void getProfileInfo(string &fName, string &sName, string &address);
    void getPaymentInfo();
protected:
    string fName;
    string sName;
    string address;
};

// constructor
customer :: customer()
{
    fName = "";
    sName = "";
    address = ""; // initialises variables
}

// destructor
customer :: ~customer()
{
}


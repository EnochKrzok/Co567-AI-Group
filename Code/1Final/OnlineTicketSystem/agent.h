// agent.h
#include <iostream>
#include <iomanip>
#include <string>
//#include <Windows.h>

#include "user.h"

class agent : public user {
public:
    agent();
    ~agent();
    void getLogin();
    void getProfileInfo(string &fName, string &sName, string &address);
    void getPaymentInfo();
protected:
    string fName;
    string sName;
    string address;
};

// constructor
agent :: agent()
{
    fName = "";
    sName = "";
    address = ""; // initialises variables
}

// destructor
agent :: ~agent()
{
}
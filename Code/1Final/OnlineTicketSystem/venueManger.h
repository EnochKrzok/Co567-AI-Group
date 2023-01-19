// venueManger.h
#include <iostream>
#include <iomanip>
#include <string>
//#include <Windows.h>

#include "user.h"

class venueManger : public user {
public:
    venueManger();
    ~venueManger();
    void getLogin();
    void getProfileInfo(string &fName, string &sName, string &address);
    void getPaymentInfo();
protected:
    string fName;
    string sName;
    string address;
};

// constructor
venueManger :: venueManger()
{
    fName = "";
    sName = "";
    address = ""; // initialises variables
}

// destructor
venueManger :: ~venueManger()
{
}
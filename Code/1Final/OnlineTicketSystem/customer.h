// customer.h
//child of user
#include <iostream>
#include <iomanip>
#include <string>
//#include <Windows.h>

#include "user.h"

class customer : public user{
public:
    customer();
    ~customer();
    void getPaymentInfo();
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


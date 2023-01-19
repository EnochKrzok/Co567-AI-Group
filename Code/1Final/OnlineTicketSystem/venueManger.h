// venueManger.h
//child of user
#include <iostream>
#include <iomanip>
#include <string>
//#include <Windows.h>

#include "user.h"

class venueManger : public user {
public:
    venueManger();
    ~venueManger();

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
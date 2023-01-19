// agent.h
//child of user
#include <iostream>
#include <iomanip>
#include <string>
//#include <Windows.h>

#include "user.h"

class agent : public user {
public:
    agent();
    ~agent();


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
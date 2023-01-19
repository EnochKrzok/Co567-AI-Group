// user.h
//this is the parent class of agent, venue manger and customer
#include <iostream>
#include <iomanip>
#include <string>
//#include <Windows.h>


class user {
public:
    user();
    ~user();
    void getLogin();
    void getProfileInfo(string &fName, string &sName, string &address);
protected:
    string fName;
    string sName;
    string address;
};

// constructor
user :: user()
{
    fName = "";
    sName = "";
    address = ""; // initialises variables
}

// destructor
user :: ~user()
{
}

// user logs in
void user :: getLogin()
{
    string username; // in the real system, a set of usernames/passwords would be saved in a database file
    string password; // in this prototype, any username/password will be accepted
    cout << "\n~~~~~~~~~~~~~~~~~ Log In ~~~~~~~~~~~~~~~~~\n" << endl;
    cout << "\n Welcome to the Bucks Centre for the Performing Arts ticket purchasing system!" << endl;
    cout << "              Please log in." << endl;
    cout<<"Enter username: ";
    getline(cin, username);
    while (username.length() > 10){
        cout << "Your username should be no more than 10 characters long." << endl;
        cout << "Please re-enter your username: ";
        getline(cin, username);
    }

    cout<<"Enter password: ";
    getline(cin, password);

    while (password.length() > 10){
        cout << "Your password should be no more than 10 characters long." << endl;
        cout << "Please re-enter your password: ";
        getline(cin, password);
    }
}

// customer enters profile information
void customer :: getProfileInfo(string &fName, string &sName, string &address) {}


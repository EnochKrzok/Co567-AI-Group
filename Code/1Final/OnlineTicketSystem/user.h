// user.h
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

class user {
public:
    user();
    ~user();
    string getLogin();
    void getProfileInfo(string &fName, string &sName, string &address);
protected:
    string fName;
    string sName;
    string address;
    string consumer;
};

// constructor
user :: user()
{
    fName = "";
    sName = "";
    address = "";
    consumer = "";// initialises variables
}

// destructor
user :: ~user()
{
}

// user logs in
string user :: getLogin()
{
    string username; // in the real system, a set of usernames/passwords would be saved in a database file
    string password; // in this prototype, any username/password will be accepted
    cout << "\n~~~~~~~~~~~~~~~~~ Log In ~~~~~~~~~~~~~~~~~\n" << endl;
    cout << "\n Welcome to the Bucks Centre for the Performing Arts ticket purchasing system!" << endl;
    cout << "Please log in." << endl;
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

    cout<<"Enter agent(a)/venue manager(v)/customer(c) : ";
    getline(cin, consumer);
    return consumer;
}

// customer/agent enters profile information
void user :: getProfileInfo(string &fName, string &sName, string &address) {
    cout << "\n~~~~~~~~~~~~~~~~~ PROFILE INFO ~~~~~~~~~~~~~~~~~\n" << endl;
    cout << "\n Add info about you so we can blackmail you later" << endl;
    cout<<"Enter First Name: ";
    getline(cin, fName);

    cout<<"Enter Surname Name: ";
    getline(cin, sName);

    cout<<"Enter email address: ";
    getline(cin, address);
}

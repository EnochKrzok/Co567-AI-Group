//main.cpp
#include <iostream>
#include <string>
#include "ticket.h"
#include "show.h"
#include "customer.h"
#include "showSeat.h"
#include "agent.h"
#include "venueManger.h"

using namespace std;

int main () {
    // Inital variable declarations
    string a,
            b,
            c,
            f,
            g,
            h;
    int d;
    double e;
    char ch,
            terminator;

    // Objects
    showSeat SEAT;
    user USER;
    show SHOW;
    ticket *TICK;

    USER.getProfileInfo(f, g, h);

    switch (USER.getLogin()){
        case 'a' : agent();
            break;
        case 'v' : venueManager();
            break;
        case 'c' : customer();
            break;
    }



}

void customer(){
    // Displays Main Menu, and allows customer to choose option
    USER.getProfileInfo(f, g, h);
    system("CLS");
    cout << "~~~~~~~~~~~~~~~~~ MAIN MENU ~~~~~~~~~~~~~~~~~~" << endl;
    cout << "1. Buy tickets for upcoming shows" << endl;
    cout << "2. Log out\n" << endl;

    cout << "Please enter a menu choice number: ";
    cin.get(ch);
    while (ch != '1' && ch != '2') {
        cin.clear();
        cin.ignore(100, '\n'); // ensures buffer is completely clear (if, say, the user inputs a long string)
        cout << "Please select a valid menu choice number: ";
        cin.get(ch);
    }
    if(ch = '1')
    {
        cout<<"hi";
        SHOW.selectShow();
    }
    if (ch = '2') {
        return EXIT_SUCCESS;
    }

    // Deals with selecting a show



    // Deals with selecting seat and calculating price of seats
    SEAT.initialiseFloorPlan();
    d = SEAT.getNumSeats();
    // e = SEAT.getSeatSelection();

    // Deals with discounts, payment and ticket generation
    return 0;
};

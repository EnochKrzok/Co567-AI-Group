//main.cpp
#include <iostream>
#include <string>
#include "ticket.h"
#include "show.h"
#include "customer.h"
#include "showSeat.h"

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
    customer CUST;
    show SHOW;
    ticket *TICK;

    // Deals with getting customer's information
    CUST.getLogin();
    CUST.getProfileInfo(f, g, h);

    // Displays Main Menu, and allows customer to choose option
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
}
//main.cpp
#include <iostream>
#include <string>

#include "ticket.h"
#include "show.h"
#include "user.h"
#include "showSeat.h"




using namespace std;

int main () {
    // Initial variable declarations
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

    string avc = USER.getLogin();
    int i = 1;
    if (avc == "a"){
        i = 1;
    }
    else if (avc == "v"){
        i = 2;
    }
    else if (avc == "c"){
        i = 3;
    }
    cout << i << endl;

    switch (i){
        case 1 : //AGENT
            // Displays Main Menu, and allows agent to choose option
            USER.getProfileInfo(f, g, h);

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
            if (ch == '1')
            {
                SHOW.selectShow();
                SHOW.selectTime();
                SEAT.initialiseFloorPlan();

                string showName = SHOW.returnShow();
                string showDate = SHOW.returnDate();
                string showTime = SHOW.returnTime();

                int numSeats = SEAT.getNumSeats();
                double price = SEAT.returnPrice();

                SEAT.displayFloorPlan();
                SEAT.getRandomSeat(numSeats);

                double total = SEAT.calculatePrice(price, numSeats);

                TICK->printTicket(showName, showDate, showTime, numSeats, f, g, h, total);

                return EXIT_SUCCESS;
            }
            else if (ch == '2') {
                return EXIT_SUCCESS;
            }
            break;
        case 2 : //VENUE MANAGER

            cout << "~~~~~~~~~~~~~~~~~ MAIN MENU ~~~~~~~~~~~~~~~~~~" << endl;
            cout << "1. Add Show" << endl;
            cout << "2. Delete Show" << endl;
            cout << "3. Reschedule Show" << endl;
            cout << "4. Apply Promotion" << endl;
            cout << "5. Add Group Discount" << endl;
            cout << "6. Log out\n" << endl;

            cout << "Please enter a menu choice number: ";
            cin.get(ch);
            while (ch != '1' && ch != '2' && ch !='3' && ch !='4' && ch!='5' && ch != '6') {
                cin.clear();
                cin.ignore(100, '\n'); // ensures buffer is completely clear (if, say, the user inputs a long string)
                cout << "Please select a valid menu choice number: ";
                cin.get(ch);
            }
            if (ch == '1')
            {
                SHOW.addShow();
            }
            else if (ch == '2')
            {
                SHOW.deleteShow();
            }
            else if (ch == '3')
            {
                SHOW.rescheduleShow();
            }
            else if (ch == '4')
            {
                SEAT.setPrice();
            }
            else if (ch == '5')
            {
                SEAT.addGroupDiscount();
            }
            else if (ch == '6') {
                return EXIT_SUCCESS;
            }
            break;
        case 3 ://CUSTOMER
            // Displays Main Menu, and allows customer to choose option
            USER.getProfileInfo(f, g, h);

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
            if(ch == '1')
            {
                SHOW.selectShow();
                SHOW.selectTime();
                SEAT.initialiseFloorPlan();

                string showName = SHOW.returnShow();
                string showDate = SHOW.returnDate();
                string showTime = SHOW.returnTime();

                int numSeats = SEAT.getNumSeats();
                double price = SEAT.returnPrice();

                SEAT.displayFloorPlan();
                SEAT.getRandomSeat(numSeats);

                double total = SEAT.calculatePrice(price, numSeats);

                TICK->printTicket(showName, showDate, showTime, numSeats, f, g, h, total);

                return EXIT_SUCCESS;
            }
            else if (ch == '2') {
                return EXIT_SUCCESS;
            }

            return 0;
            break;
    }

}


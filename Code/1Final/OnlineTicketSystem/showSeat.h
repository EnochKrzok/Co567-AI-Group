// showSeat.h
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <time.h>
#include <conio.h>

using namespace std;

class showSeat
{
public:
    showSeat();
    ~showSeat();
    void initialiseFloorPlan();
    int getNumSeats();
    int setNumSeats();
    void displayFloorPlan ();
    double calculatePrice (double &price, int &numSeats);
    void getRandomSeat(int &numSeats);
    void setPrice();
    double returnPrice();
    void addGroupDiscount();
protected:
    char floorPlan[7][6];
    int numSeats;
    int rNum; // used to calculate price
    double price;
    double discount;
    int qualify;
};

// constructor
showSeat :: showSeat()
{
    for(int r = 0; r < 7; r++)
        for(int c = 0; c < 6; c++)
            floorPlan[r][c] = '0'; // allocates memory slots for floor plan array
    numSeats = 0;
    rNum = 5;
    price = 10;
    discount = 0;
    qualify = 0;// initialises remaining variables
}

// destructor
showSeat :: ~showSeat()
{
}

// initialises theatre floor plan
void showSeat :: initialiseFloorPlan()
{
    for(int r = 0; r < 7; r++) // prepares rows
        for (int c = 0; c < 6; c++){ // prepares columns
            floorPlan[r][c] = 'A'; // populates array with 'A' character (Avaliable)
            }
}

// gets the user's no. of seats
int showSeat :: getNumSeats()
{
    cout << "\n~~~~~~~SELECT NUMBER OF SEATS~~~~~~~\n" << endl;

    cin.clear();
    cout << "How many tickets would you like to purchase (Max." << rNum <<  ")?: "; // prompts customer to enter no. of tickets
    cin >> numSeats;
    cout << endl;

    while (numSeats < 0 && numSeats > rNum) {
        cin.clear();
        cout << "Please select a valid amount of tickets to buy: ";
        cin >> numSeats;;
    }

    return numSeats;
}

//set the number of seats agent/customer can buy
int showSeat :: setNumSeats()
{
    cout << "\n~~~~~~~SELECT NUMBER OF SEATS~~~~~~~\n" << endl;

    cin.clear();
    cout << "How many tickets can agents and customers get? : "; // prompts customer to enter no. of tickets
    cin >> rNum;
    cout << endl;
    return rNum;
}

//displays the seats
void showSeat:: displayFloorPlan(){
    for(int c = 0; c < 6; c++) // prepares columns
    {
        for (int r = 0; r < 7; r++) // prepares rows
            cout << floorPlan[r][c] << " " ;
        cout << " \n" << endl;
    }
}

//Calculates the price
double showSeat:: calculatePrice(double &price, int &numSeats){
    double total = price * numSeats;
    return total;
}

//figures out if you want to manually or automatically get seats and does/ helps you do it
void showSeat:: getRandomSeat(int &numSeats){
    char ch;
    char terminator;
    cout << "\n~~~~~~~Seat Selection~~~~~~~\n" << endl;
    cout << "1. Random" << endl;
    cout << "2. Manual" << endl;

    cin.clear();
    cout << "Please select a option number: ";
    cin.get(ch);
    while (ch != '1' && ch != '2') {
        cin.clear();
        cout << "Please select a valid option number: ";
        cin.get(ch);
    }
    switch (ch) {
        case '1' : //random
            srand(time(0));
            for (int i = 0; i < numSeats; i++){
                int r = (rand() % 7);
                int c = (rand() % 6);
                floorPlan[r][c] = 'H';
            }
            cout << "The H are the seat/s you have reserved" << endl;
            displayFloorPlan();
            cout << "\n" << endl;
            break;
        case '2' : //manual
            for (int i = 0; i < numSeats; i++){
                int r;
                int c;
                cin.clear();
                cout << "please select row number between 0 and 6 : " ;
                cin >> r;
                while (r < 0 && r > 6) {
                    cin.clear();
                    cout << "Please select a valid row number: ";
                    cin >> r;
                }
                cin.clear();
                cout << "please select column number between 0 and 5 : ";
                cin >> c;
                while (c < 0 && c > 6) {
                    cin.clear();
                    cout << "Please select a valid column number: ";
                    cin >> c;
                }
                floorPlan[r][c] = 'H';
                displayFloorPlan();
                cout << "\n" << endl;
            }
            cout << "The H are the seat/s you have reserved" << endl;
            displayFloorPlan();
            cout << "\n" << endl;
            break;

    }
    for(int c = 0; c < 6; c++) // prepares columns
    {
        for (int r = 0; r < 7; r++) // prepares rows
            if (floorPlan[r][c] == 'H') {
                floorPlan[r][c] = 'U';
            }
    }
    cout << "This is the new seating plan" << endl;
    displayFloorPlan();
    cin.get(terminator); // clears buffer
}

//set the price of the seats
void showSeat:: setPrice(){
    cout << "\n~~~~~~~CHANGE THE PRICE FOR THE SEATS~~~~~~~\n" << endl;

    cin.clear();
    cout << "What price would you like per seat? : "; // prompts venue manager to enter price of seat
    cin >> price;
    cout << endl;
}

//returns the price of seats
double showSeat :: returnPrice(){
    return price;
}


//venue manager adds group discount to show
void showSeat :: addGroupDiscount(){
    cout << "\n~~~~~~~ADD A GROUP DISCOUNT~~~~~~~\n" << endl;

    cin.clear();
    cout << "How many tickets for discount to activate? : "; // prompts customer to enter no. of tickets
    cin >> qualify;
    cout << endl;
    cin.clear();
    cout << "How big the discount? (0 = 0%, 0.5 = 50% and 1 = 100%) : "; // prompts customer to enter no. of tickets
    cin >> discount;
    cout << endl;
}
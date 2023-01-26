// showSeat.h
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class showSeat
{
public:
    showSeat();
    ~showSeat();
    void initialiseFloorPlan();
    int getNumSeats();
    int setNumSeats();
    double getSeatSelection();
    void displayFloorPlan (int r, int c);
    void calculatePrice (double &price);
    void getRandomSeat();
    void setPrice();
protected:
    char floorPlan[7][6];
    int numSeats;
    int rNum; // used to calculate price
    double price;
};

// constructor
showSeat :: showSeat()
{
    for(int r = 0; r < 7; r++)
        for(int c = 0; c < 6; c++)
            floorPlan[r][c] = '0'; // allocates memory slots for floor plan array
            numSeats = 0;
            rNum = 0;
            price = 0; // initialises remaining variables
}

// destructor
showSeat :: ~showSeat()
{
}

// initialises theatre floor plan
void showSeat :: initialiseFloorPlan()
{
    for(int r = 0; r < 7; r++) // prepares rows
        for (int c = 0; c < 6; c++) // prepares columns
            floorPlan[r][c] = 'A'; // populates array with 'A' character (Avaliable)
}

// gets the user's no. of seats
int showSeat :: getNumSeats()
{
    system("CLS");
    cout << "\n~~~~~~~SELECT SEATS INTERACTIVELY~~~~~~~\n" << endl;
    do {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "How many tickets would you like to purchase (Max." << rNum <<  ")?: "; // prompts customer to enter no. of tickets
        cin >> numSeats;
        cout << endl;
    }
    while (numSeats < 1 && numSeats > rNum );
        return numSeats;
}

//set the number of seats agent/customer can buy
int showSeat :: setNumSeats()
{
    system("CLS");
    cout << "\n~~~~~~~SELECT NUMBER OF SEATS~~~~~~~\n" << endl;

    cin.clear();
    cin.ignore(100, '\n');
    cout << "How many tickets can agents and customers get? : "; // prompts customer to enter no. of tickets
    cin >> rNum;
    cout << endl;
}

//
double showSeat :: getSeatSelection(){

}

//
void showSeat:: displayFloorPlan(int r, int c){
    for(int r = 0; r < 7; r++) // prepares rows
    {
        for (int c = 0; c < 6; c++) // prepares columns
            cout << floorPlan << endl
        cout << "\n" << endl
    }
}

//
void showSeat:: calculatePrice(double &price){

}

//
void showSeat:: getRandomSeat(){

}

//
void showSeat:: setPrice(){

}


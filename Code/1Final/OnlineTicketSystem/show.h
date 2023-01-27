// show.h
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class show {
public:
    show();
    ~show();
    void selectShow();
    void selectTime();
    void addShow();
    void deleteShow();
    void rescheduleShow();
    void selectDateRange();
    string returnShow();
    string returnDate();
    string returnTime();
protected:
    string showName;
    string showDate;
    string showTime;


};

// constructor
show :: show()
{
    showName = "";
    showDate = "";
    showTime = "";
}

// destructor
show ::~show()
{
}

// customer selects upcoming show
void show:: selectShow() {
    char ch;
    char terminator;
    cout << "\n~~~~~~~SELECT AN UPCOMING SHOW~~~~~~~\n" << endl;
    cout << "1. Star Wars: The Musical (20/05/2013)" << endl;
    cout << "2. Les Miserables (21/05/2013)" << endl;
    cout << "3. The Phantom of the Opera (22/05/2013)\n" << endl;

    cin.clear();
    cin.ignore(100, '\n'); // ensures buffer is completely clear (if, say, the user has previously input a long string)
    cout << "Please select a show number: ";
    cin.get(ch);
    while (ch != '1' && ch != '2' && ch != '3') {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please select a valid show number: ";
        cin.get(ch);
    }
    switch (ch) {
        case '1' : showName = "Star Wars: The Musical", showDate = "28/05/2013";
            break;
        case '2' : showName = "Les Miserables", showDate = "21/05/2013";
            break;
        case '3' : showName = "The Phantom of the Opera", showDate = "22/05/2013";
            break;
    }
    this->showName = showName;
    this->showDate = showDate; // enters reference variable into class variable
    cin.get(terminator); // clears buffer
}

//customer selects 1pm/7pm showing
void show::selectTime(){
    char ch;
    char terminator;
    cout << "\n~~~~~~~SELECT TIME~~~~~~~\n" << endl;
    cout << "1. 1pm" << endl;
    cout << "2. 7pm\n" << endl;

    cin.clear();
    cout << "Please select time number: ";
    cin.get(ch);
    while (ch != '1' && ch != '2') {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please select a valid time number: ";
        cin.get(ch);
    }

    switch (ch) {
        case '1' : showTime = "1pm";
            break;
        case '2' : showTime = "7pm";
            break;
    }
    this->showTime = showTime; // enters reference variable into class variable
    cin.get(terminator); // clears buffer;
}

//return show name
string show :: returnShow(){
    return showName;
}

//return show date(something difficult to get)
string show :: returnDate(){
    return showDate;
}

//return show time
string show :: returnTime(){
    return showTime;
}

//venue manager add show
void show :: addShow(){
    char terminator;
    cout << "\n~~~~~~~ADD AN UPCOMING SHOW~~~~~~~\n" << endl;

    cin.clear();
    cin.ignore(100, '\n'); // ensures buffer is completely clear (if, say, the user has previously input a long string)
    cout << "Please enter name of show to add : ";
    cin >> showName;
    cin.clear();
    cin.ignore(100, '\n'); // ensures buffer is completely clear (if, say, the user has previously input a long string)
    cout << "Please enter date of show to add DD/MM/YYYY : ";
    cin >> showDate;
    cout << "Show has been added : " << showName << " " << showDate << endl;
    cin.get(terminator); // clears buffer
}

//venue manager deletes show
void show :: deleteShow(){
    char ch;
    char terminator;
    cout << "\n~~~~~~~DELETE AN UPCOMING SHOW~~~~~~~\n" << endl;
    cout << "1. Star Wars: The Musical (20/05/2013)" << endl;
    cout << "2. Les Miserables (21/05/2013)" << endl;
    cout << "3. The Phantom of the Opera (22/05/2013)\n" << endl;

    cin.clear();
    cin.ignore(100, '\n'); // ensures buffer is completely clear (if, say, the user has previously input a long string)
    cout << "Please select a show number: ";
    cin.get(ch);
    while (ch != '1' && ch != '2' && ch != '3') {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please select a valid show number: ";
        cin.get(ch);
    }
    switch (ch) {
        case '1' :
            cout << "1. Star Wars: The Musical (20/05/2013) has been removed" <<endl;
            break;
        case '2' :
            cout << "2. Les Miserables (21/05/2013) has been removed" << endl;
            break;
        case '3' :
            cout << "3. The Phantom of the Opera (22/05/2013)has been removed" << endl;
            break;
    }
    cin.get(terminator); // clears buffer
}

//venue manager reschedules show
void show :: rescheduleShow(){
    char ch;
    char terminator;
    cout << "\n~~~~~~~RESCHEDULE AN UPCOMING SHOW~~~~~~~\n" << endl;
    cout << "1. Star Wars: The Musical (20/05/2013)" << endl;
    cout << "2. Les Miserables (21/05/2013)" << endl;
    cout << "3. The Phantom of the Opera (22/05/2013)\n" << endl;

    cin.clear();
    cin.ignore(100, '\n'); // ensures buffer is completely clear (if, say, the user has previously input a long string)
    cout << "Please select a show number: ";
    cin.get(ch);
    while (ch != '1' && ch != '2' && ch != '3') {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please select a valid show number: ";
        cin.get(ch);
    }
    switch (ch) {
        case '1' :
            showName = "Star Wars: The Musical";
            cin.clear();
            cin.ignore(100, '\n'); // ensures buffer is completely clear (if, say, the user has previously input a long string)
            cout << "Please enter new date format DD/MM/YYYY: ";
            cin >> showDate;
            cout << showName << "Has been rescheduled to " << showDate << endl;
            break;
        case '2' :
            showName = "Les Miserables";
            cin.clear();
            cin.ignore(100, '\n'); // ensures buffer is completely clear (if, say, the user has previously input a long string)
            cout << "Please enter new date format DD/MM/YYYY: ";
            cin >> showDate;
            cout << showName << "Has been rescheduled to " << showDate << endl;
            break;
        case '3' :
            showName = "The Phantom of the Opera";
            cin.clear();
            cin.ignore(100, '\n'); // ensures buffer is completely clear (if, say, the user has previously input a long string)
            cout << "Please enter new date format DD/MM/YYYY: ";
            cin >> showDate;
            cout << showName << "Has been rescheduled to " << showDate << endl;
            break;
    }
}

// select a date range to search for shows
void show :: selectDateRange(){

}


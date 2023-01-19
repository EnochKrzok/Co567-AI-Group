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
    string selectTime();

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
    system("CLS");
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
// customer selects 1pm/7pm showing
//string show::selectTime(){}

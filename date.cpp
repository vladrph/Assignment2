#include <iostream>
#include <string>
#include <iomanip>

#include "date.h"
//#include "date.h"

using namespace std;


//*********************************************************************************************
//*********************************************************************************************
//	D A T E	. C P P


//This stub (for now) should be implemented in date.cpp
//*************************************************************************************
//Name:	Date
//Precondition: The state of the object (private data) has not been initialized
//Postcondition: The state has been initialized to today's date
//Description:	This is the default constructor which will be called automatically when
//an object is declared.	It will initialize the state of the class
//
//*************************************************************************************
Date::Date() : myDay(01), myMonth(01), myYear(0001) {

    cout << "Default constructor has been called" << endl;
    display();


}


//*************************************************************************************
//Name:	Explicit Date constructor
//Precondition: Unsigned objects are pointing to the local variables.
//Postcondition: Objects uses pointers to point to the myMonth, myDay, and myYear date object respectively
//Description: This an explicit value constructor that set the date to a user defined date. The date prints 2-digits for
// month (m) and day (d), and 4-digits for year (y). This function also sorts the day for specific parameters.
//
//*************************************************************************************
Date::Date(unsigned m, unsigned d, unsigned y) {
    cout << "Explicit-value constructor has been called " << endl;

    this->myMonth = m;
    this->myYear = y;
    this->myDay = d;


    if (m >= 13 || m <= 0) {

        cout << "Month = "<< setfill('0') << setw(2) << myMonth << " is incorrect" << endl;
    }
    if (m == 2 && d >= 30) {

        cout << "Day = "<< setfill('0') << setw(2) <<  myDay << " is incorrect\n" << endl;
    }
    if (d >= 32) {

        cout << "Day = "<< setfill('0') << setw(2) <<  myDay << " is incorrect" << endl;
    }
    if (y == 0000) {

        cout << "Year = " << setfill('0') << setw(4) << myYear << " is incorrect\n" << endl;
    } else if (m >= 1 && m <= 12 && d >= 0 && d <= 29 && y >= 0 && y <= 9999) {
        display();


    }





}

//*************************************************************************************
//Name:	Display
//Precondition: The function doesn't print anything to the screen.
//Postcondition: The function outputs the date object to the screen.
//Description: This function outputs the myMonth, myDate, and myYear object ot the screen. This function also prints a
// message if the year is a leap year.
//
//
//*************************************************************************************
void Date::display() {


    cout << setfill('0') << setw(2) << myMonth << "/";
    cout << setfill('0') << setw(2) << myDay << "/";
    cout << setfill('0') << setw(4) << myYear << endl;
    if (myYear % 4 == 0) {
        cout << "This is a leap year.\n\n";
    }


}

//*************************************************************************************
//Name:	getMonth
//Precondition:  The function returns 1 to the user.
//Postcondition:  The function gets the value stored in the myMonth object.
//Description:  The function uses a pointer to return the value stored in myMonth object to the user.
//
//
//*************************************************************************************
int Date::getMonth() {
    return this->myMonth;
    // return 1;

}

//*************************************************************************************
//Name:	getDay
//Precondition:  The function returns 1 to the user.
//Postcondition:  The function gets the value stored in the myDay object.
//Description: The function uses a pointer to return the value stored in myDay object to the user.
//
//
//*************************************************************************************
int Date::getDay() {

    return this->myDay;

}








//*************************************************************************************
//Name:	getYear
//Precondition: The function returns 1 to the user.
//Postcondition: The function gets the value stored in the myDay object.
//Description: The function uses a pointer to return the value stored in myYear object to the user.

//
//
//*************************************************************************************
int Date::getYear() {
    return this->myYear;
    return 1;

}

//*************************************************************************************
//Name: setMonth
//Precondition:  Empty mutator that changes the month.
//Postcondition: The function gets the value stored in the myMonth object.
//Description:  This function allows clients to change the value stored in member m variable.
//
//
//*************************************************************************************
void Date::setMonth(unsigned m) {
    myMonth = m;
    //   setMonth(m);

}

//*************************************************************************************
//Name:	setDay
//Precondition:  Empty mutator that changes the day.
//Postcondition: The function gets the value stored in the myDay object.
//Description:  This function allows clients to change the value stored in member d variable.
//
//
//*************************************************************************************
void Date::setDay(unsigned d) {

    myDay = d;


}

//*************************************************************************************
//Name:	setYear
//Precondition:  Empty mutator that changes the year.
//Postcondition: The function gets the value stored in the myYear object.
//Description:  This function allows clients to change the value stored in member y variable.
//
//
//*************************************************************************************
void Date::setYear(unsigned y) {


    myYear = y;

}


ostream &operator<<(ostream &out, Date &dateObj) {

    out << setfill('0') << setw(2) << dateObj.myMonth << "/";
    out << setfill('0') << setw(2) << dateObj.myDay << "/";
    out << setfill('0') << setw(4) << dateObj.myYear << "";


    return out;

}


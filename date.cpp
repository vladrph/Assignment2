#include <iostream>
#include <string>
#include <iomanip>
#include <functional>
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
//Precondition: Unisgned obejcts are pointing to the local variables.
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

        cout << "Month = " << myMonth << " is incorrect" << endl;
    }
    if (m == 2 && d >= 30) {

        cout << "Day = " << myDay << " is incorrect\n" << endl;
    }
    if (d >= 32) {

        cout << "Day = " << myDay << " is incorrect \n" << endl;
    }
    if (y == 0000) {

        cout << "Year = " << setfill('0') << setw(4) << myYear << " is incorrect\n" << endl;
    } else if (m >= 1 && m <= 12 && d >= 0 && d <= 29 && y >= 0 && y <= 9999) {
      //  myMonth = getMonth();
       // myYear = getYear();
      //  myDay = getDay();
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
//Precondition:
//Postcondition:
//Description:
//
//
//*************************************************************************************
int Date::getMonth() {
    return this->myMonth;
    // return 1;

}

//*************************************************************************************
//Name:	getDay
//Precondition:
//Postcondition:
//Description:
//
//
//*************************************************************************************
int Date::getDay() {

    return this->myDay;

}








//*************************************************************************************
//Name:	getYear
//Precondition:
//Postcondition:
//Description:

//
//
//*************************************************************************************
int Date::getYear() {
    return this->myYear;
    return 1;

}

//*************************************************************************************
//Name: setMonth
//Precondition:
//Postcondition:
//Description:
//
//
//*************************************************************************************
void Date::setMonth(unsigned m) {
    myMonth = m;
    //   setMonth(m);

}

//*************************************************************************************
//Name:	setDay
//Precondition:
//Postcondition:
//Description:
//
//
//*************************************************************************************
void Date::setDay(unsigned d) {

    myDay = d;


}

//*************************************************************************************
//Name:	getYear
//Precondition:
//Postcondition:
//Description:
//
//
//*************************************************************************************
void Date::setYear(unsigned y) {


    myYear = y;

}


ostream &operator<<(ostream &out, Date &dateObj) {

    out << setfill('0') << setw(2) << dateObj.myMonth << "/";
    out << setfill('0') << setw(2) << dateObj.myDay << "/";
    out << setfill('0') << setw(4) << dateObj.myYear << " ";


    return out;

}

//*********************************************************************************************
//*********************************************************************************************
//	D A T E	D R I V E R . C P P




//EXAMPLE OF PROGRAM HEADER
/********************************************************************************************

Name:	Z#:
Course: Date Structures and Algorithm Analysis (COP3530) Professor: Dr. Lofton Bullard
Due Date:	Due Time:
Total Points: 100 Assignment 3: Date program

Description:



*********************************************************************************************/


int main() {

    Date myDate;
    Date herDate(11, 14, 1953);
    Date test1Date(25, 1, 1982); //should generate error message that bad month
    Date test22Date(2, 29, 2020); //ok, should say leep year
    Date test3Date(2, 30, 2021); //should generate error message that bad day
    Date test4Date(1, 25, 0000); //should generate error message that bad year
    Date test5Date(80, 40, 0000); //should generate error message that bad month, day and year

    herDate.display();
    //test22Date.display();
    cout << herDate.getMonth() << endl;
    cout << herDate.getDay() << endl;
    cout << herDate.getYear() << endl;
    myDate.setMonth(11);
    myDate.setDay(12);
    myDate.setYear(2015);
    std::cout << "myDate: " << myDate << " test22Date: " << test22Date << " herDate: " << herDate << endl;
    //cout << test22Date.display() << endl;

    return 0;

}

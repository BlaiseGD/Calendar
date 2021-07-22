#include <iostream>
#include "months.h"

/*Jan 31 days
Feb 28 days
March 31 days
April 30 days
May 31 days
June 30 days
July 31 days
August 31 days
September 30 days
October 31 days 
Novemver 30 days 
December 31 days*/

int main(){
    int year; //choice of year for calendar
    int leapyearFeb = (year % 4 > 0) ? 28 : 29; //ternary operator to decide for leap year
    int menuChoice; //allows choice of 1 or 2
    int feb = 2; //what month february is seperate due to leap year
    int monthChoice;

    typedef struct thirty{  //this is the order of months for 30 day months
        int april = 4;
        int june = 6;
        int september = 9;
        int november = 11;
    }M30;

    typedef struct thirtyone{   //this is the order of months for 30 day months
        int jan = 1;
        int march = 3;
        int may = 5;
        int july = 7;
        int august = 8;
        int october = 10;
        int december = 12;
    }M31;

    std::cout << "Select an option:" << std::endl;
    std::cout << "1. Make your own calendar" << std::endl;
    std::cout << "2. View calendar (default)" << std::endl;
    std::cin >> menuChoice;
    system("clear");
    if(menuChoice == 1){
        std::cin.clear();
        customCalendar();
    }
    else{    
        std::cout << "Year for calendar?" << std::endl;
        std::cin >> year;
        std::cout << "What month do you wanna display?" << std::endl;
    }

    //Make a switch statement for choice of month

    return 0;
}

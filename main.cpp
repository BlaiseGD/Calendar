#include <iostream>
#include "months.h"

int main(){
    int menuChoice; //allows choice of 1 or 2
    int monthChoice;

    std::cout << "Select an option:" << std::endl;
    std::cout << "1. Make your own calendar" << std::endl;
    std::cout << "2. View calendar (default)" << std::endl;
    std::cin >> menuChoice;
    system("clear");
    monthMistake:
    if(menuChoice == 1){
        std::cin.clear();
        customCalendar();
        std::cout << "Would you like to save your calendar?" << std::endl;
        //add in a save system for calendar
        exit(0);
    }
    else{    
        std::cout << "Year for calendar?" << std::endl;
        std::cin >> year;
        std::cout << "What month do you wanna display?" << std::endl;
        std::cin >> monthChoice;
    }

    int leapyearFeb = (year % 4 > 0) ? 28 : 29; //ternary operator to decide for leap year


    switch(monthChoice){
        case 1: 
        system("clear");
        std::cout << "     Januaray" << std::endl;
        thirtyOneMonth();
        std::cin.clear();
        break;
        case 2: 
        system("clear");
        std::cout << "     February" << std::endl;
        std::cin.clear();
        for(int i = 1; i <= leapyearFeb; i++){
            printf("|%d", i);
            if(i % 7 == 0) std::cout << std::endl;
        }
        break;
        case 3:
        system("clear");
        std::cout << "     March" << std::endl;
        thirtyOneMonth();
        std::cin.clear();
        break;
        case 4:
        system("clear");
        std::cout << "     April" << std::endl;
        thirtyMonth();
        std::cin.clear();
        break;
        case 5:
        system("clear");
        std::cout << "    May" << std::endl;
        thirtyOneMonth();
        std::cin.clear();
        break;
        case 6:
        system("clear");
        std::cout << "     June" << std::endl;
        thirtyMonth();
        std::cin.clear();
        break;
        case 7:
        system("clear");
        std::cout << "     July" << std::endl;
        thirtyOneMonth();
        std::cin.clear();
        break;
        case 8:
        system("clear");
        std::cout << "     August" << std::endl;
        thirtyOneMonth();
        std::cin.clear();
        break;
        case 9:
        system("clear");
        std::cout << "    September" << std::endl;
        thirtyMonth();
        std::cin.clear();
        break;
        case 10:
        system("clear");
        std::cout << "     October" << std::endl;
        thirtyOneMonth();
        std::cin.clear();
        break;
        case 11:
        system("clear");
        std::cout << "     November" << std::endl;
        thirtyMonth();
        std::cin.clear();
        break;
        case 12:
        system("clear");
        std::cout << "     December" << std::endl;
        thirtyOneMonth();
        std::cin.clear();
        break;
        default:
        std::cin.clear();
        std::cout << "Please type in a number for your month of choice!" << std::endl;
        goto monthMistake;
        break;
    }

    return 0;
}

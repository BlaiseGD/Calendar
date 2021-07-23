#include <iostream>
#include "months.h"

int main(){
    int menuChoice; //allows choice of 1 or 2
    int monthChoice;
    menu:
    fflush(stdin);
    std::cout << "Select an option:" << std::endl;
    std::cout << "1. Make your own calendar" << std::endl;
    std::cout << "2. View saved calendar" << std::endl;
    std::cout << "3. View calendar" << std::endl;
    //main menu
    std::cin >> menuChoice;
    system("clear");
    monthMistake:
    switch(menuChoice){
        case 1: 
        std::cin.clear();
        customCalendar();
        exit(EXIT_SUCCESS);
        //menu choice of custom calendar
        case 2:
        std::cin.clear();
        savedCalendar();
        exit(EXIT_SUCCESS);
        //menu choice to view a previously saved calendar
        case 3:
        std::cin.clear();
        std::cout << "Year for calendar?" << std::endl;
        std::cin >> year;
        std::cout << "What month do you wanna display?" << " Months are from 1-12" <<std::endl;
        std::cin >> monthChoice;
        default:
        std::cout << "You made a typing mistake" << std::endl;
        fflush(stdin);
        goto menu;
        //basic twelve months to choose from
    }

    int leapyearFeb = (year % 4 > 0) ? 28 : 29; //ternary operator to decide for leap year
    system("clear");
    
    switch(monthChoice){
        case 1: 
        std::cout << "     Januaray" << std::endl;
        thirtyOneMonth();
        std::cin.clear();
        break;
        case 2: 
        std::cout << "     February" << std::endl;
        std::cin.clear();
        for(int i = 1; i <= leapyearFeb; i++){
            printf("|%d", i);
            if(i % 7 == 0) std::cout << std::endl;
            //creates february calendar
        }
        break;
        case 3:
        std::cout << "     March" << std::endl;
        thirtyOneMonth();
        std::cin.clear();
        break;
        case 4:
        std::cout << "     April" << std::endl;
        thirtyMonth();
        std::cin.clear();
        break;
        case 5:
        std::cout << "    May" << std::endl;
        thirtyOneMonth();
        std::cin.clear();
        break;
        case 6:
        std::cout << "     June" << std::endl;
        thirtyMonth();
        std::cin.clear();
        break;
        case 7:
        std::cout << "     July" << std::endl;
        thirtyOneMonth();
        std::cin.clear();
        break;
        case 8:
        std::cout << "     August" << std::endl;
        thirtyOneMonth();
        std::cin.clear();
        break;
        case 9:
        std::cout << "    September" << std::endl;
        thirtyMonth();
        std::cin.clear();
        break;
        case 10:
        std::cout << "     October" << std::endl;
        thirtyOneMonth();
        std::cin.clear();
        break;
        case 11:
        std::cout << "     November" << std::endl;
        thirtyMonth();
        std::cin.clear();
        break;
        case 12:
        std::cout << "     December" << std::endl;
        thirtyOneMonth();
        std::cin.clear();
        break;
        default:
        std::cin.clear();
        std::cout << "Please type in a number for your month of choice!" << std::endl;
        goto monthMistake;
        //incase of typing error
        break;
    }
    return EXIT_SUCCESS;
}

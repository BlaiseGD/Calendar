#include <iostream>
#include "calendar.h"

int main(){
    int menuChoice; //allows choice of 1 or 2
    int monthChoice;
    char placeholder;
    menu:
    fflush(stdin);
    std::cout << "It is advised that you view the information section to navigate efficiently" << std::endl << std::endl;
    std::cout << "Select an option:" << std::endl;
    std::cout << "1. Make your own calendar" << std::endl;
    std::cout << "2. View saved calendar" << std::endl;
    std::cout << "3. Information" << std::endl;
    std::cout << "4. View calendar (default)" << std::endl;
    std::cin >> menuChoice;
    system("clear");
    monthMistake:
    switch(menuChoice){
        case 1: 
            std::cin.clear();
            customCalendar();
            option();
            goto menu;
            break;
        case 2:
            std::cin.clear();
            savedCalendar();
            option();
            goto menu;
            break;
        case 3:
            std::cin.clear();
            std::cout << "WARNING: YOU CAN ONLY HAVE ONE SAVED CALENDAR AT ANY GIVEN TIME" << std::endl;
            std::cout << "IF YOU ATTEMPT TO CREATE A NEW CALENDAR, THE PREVIOUS WILL BE OVERWRITTEN" << std::endl << std::endl;
            std::cout << "The number '1' means yes in this program, any other value means no" << std::endl;
            std::cin >> placeholder;
            system("clear");
            goto menu;
            break;
        default:
            std::cin.clear();
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
            option();
            goto menu;
            break;
        case 2: 
            system("clear");
            std::cout << "     February" << std::endl;
            std::cin.clear();
            for(int i = 1; i <= leapyearFeb; i++){
                printf("|%d", i);
                if(i % 7 == 0) std::cout << std::endl;
            }
            option();
            goto menu;
            break;
        case 3:
            system("clear");
            std::cout << "     March" << std::endl;
            thirtyOneMonth();
            std::cin.clear();
            option();
            goto menu;
            break;
        case 4:
            system("clear");
            std::cout << "     April" << std::endl;
            thirtyMonth();
            std::cin.clear();
            option();
            goto menu;
            break;
        case 5:
            system("clear");
            std::cout << "    May" << std::endl;
            thirtyOneMonth();
            std::cin.clear();
            option();
            goto menu;
            break;
        case 6:
            system("clear");
            std::cout << "     June" << std::endl;
            thirtyMonth();
            std::cin.clear();
            option();
            goto menu;
            break;
        case 7:
            system("clear");
            std::cout << "     July" << std::endl;
            thirtyOneMonth();
            std::cin.clear();
            option();
            goto menu;
            break;
        case 8:
            system("clear");
            std::cout << "     August" << std::endl;
            thirtyOneMonth();
            std::cin.clear();
            option();
            goto menu;
            break;
        case 9:
            system("clear");
            std::cout << "    September" << std::endl;
            thirtyMonth();
            std::cin.clear();
            option();
            goto menu;
            break;
        case 10:
            system("clear");
            std::cout << "     October" << std::endl;
            thirtyOneMonth();
            std::cin.clear();
            option();
            goto menu;
            break;
        case 11:
            system("clear");
            std::cout << "     November" << std::endl;
            thirtyMonth();
            std::cin.clear();
            option();
            goto menu;
            break;
        case 12:
            system("clear");
            std::cout << "     December" << std::endl;
            thirtyOneMonth();
            std::cin.clear();
            option();
            goto menu;
            break;
        default:
            std::cin.clear();
            std::cout << "Please type in a number for your month of choice!" << std::endl;
            std::cin >> placeholder;
            system("clear");
            goto monthMistake;
            break;
    }
    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

    void customCalendar(){
        int days;
        printf("How many days do you want in your calendar?\n");
        scanf("%d", &days);
        system("cls");
        for(int i = 0; i <= days; i++){
            printf("| %d |", i);
            if(i % 7 == 0){
                printf("\n");
            }
        }
    }

      void thirtyOneMonth(){
        system("cls");
        for(int i = 0; i <= 31; i++){
            printf("| %d |", i); //creates calendar
            if(i % 7 == 0){ //newline for a new week
                printf("\n");
            }
        }
    }

    void thirtyMonth(){
        system("cls");
        for(int i = 0; i <= 30; i++){
            printf("| %d |", i);
            if(i % 7 == 0){
                printf("\n");
            }
        }
    }



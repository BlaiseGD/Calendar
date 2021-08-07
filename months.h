#include <stdio.h>
#include <stdlib.h>

int year;
    //This allows for the creation of your very own custom calendar
    void customCalendar(){
        int days;
        int saveChoice;
        printf("How many days do you want in your calendar?\n");
        scanf("%d", &days);
        printf("Would you like to save your calendar?\n");
        scanf("%d",&saveChoice);
        for(int i = 1; i <= days; i++){
            printf("|%d", i);
            if(i % 7 == 0){
                printf("\n");
            }
        }

        if(saveChoice = 1){
            //char s;
            FILE *fp;
            fp = freopen("data.txt", "w+", stdout);
            printf("%d", days);
            //writes the value of days to data.txt
            if(fp == NULL){
            perror("Error opening file");
            exit(EXIT_FAILURE);
            }
            fclose(fp);
        }
    }
    //This saves your calendar (can only have one saved calendar at any given time)
    void savedCalendar(){
        FILE* savedFile;
        savedFile = fopen("data.txt", "r");
        int fileValue;
        if(savedFile == NULL){
            printf("File Error");
            exit(EXIT_FAILURE);
        }
         while(fscanf(savedFile, "%d", &fileValue ) == 1)
        /* fscanf returns the number of input items successfully matched and assigned,
           which can be fewer than provided for, or even zero in the event of an early matching failure.
           So that loop will read everything, split by a space or newline, until it gets to the end of file,
           or it encounters something that isnt a integer. Thank you person on reddit for explaining this to me.
           Follow C_Programming If you see this ;) */

         for(int i = 1; i <= fileValue; i++){
            printf("|%d", i);
            if(i % 7 == 0){
                printf("\n");
            }
        }
        fclose(savedFile);

    }

      void thirtyOneMonth(){
        //for loop creates calendar
        for(int i = 1; i <= 31; i++){

            printf("|%d", i);
            if(i % 7 == 0){
                //newline for a new week
                printf("\n");
            }
        }
    }

    void thirtyMonth(){
        for(int i = 1; i <= 30; i++){
            printf("|%d", i);
            if(i % 7 == 0){
                printf("\n");
            }
        }
    }



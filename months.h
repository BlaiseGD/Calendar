/*This file is incomplete right now, the save feature doesn't work right now and I need to learn more about file 
mainpulation, stdin, stdout, etc before those functions work.
Also, I really like C and C++! They are both really fun! If you are reading this have a nice day!*/

#define MAX 255
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int year;

    void customCalendar(){
        int days;
        int saveChoice;
        printf("How many days do you want in your calendar?\n");
        scanf("%d", &days);
        printf("Would you like to save your calendar?\n");
        scanf("%d",&saveChoice);
        fflush(stdout); //flushes stdout so only calendar is in stdout
        for(int i = 1; i <= days; i++){
            printf("|%d", i);
            if(i % 7 == 0){
                printf("\n");
            }
        }

        if(saveChoice = 1){
            //char s;
            FILE *fp;
            fp = freopen("data.txt", "a+", stdout);
            //copies stdout to data.txt
            if(fp == NULL){
            //incase file has nothing in it
            perror("Error opening file");
            exit(EXIT_FAILURE);
            }
           // while((s = fgetc(fp)!= EOF)){
           //     printf("%c",s); //supposed to print the contents of the file (for TESTING)
            //}

            fclose(fp);
        }
    }

    void savedCalendar(){
        FILE *fp;
        char consoleStdout;
        fp = fopen("data.txt", "r+");
        while((consoleStdout = fgetc(fp)!= EOF)){
                printf("%c",consoleStdout);
                //supposed to print contents of the file to console (contents being stdout)
            }
    }

      void thirtyOneMonth(){
        for(int i = 1; i <= 31; i++){
            printf("|%d", i); //creates calendar
            if(i % 7 == 0){ //newline for a new week
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




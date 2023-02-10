//This program is a clock. It depends on initial input supplied by user as program arguments.
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Digital clock!\nUsage: %s <current_hours> <current_minutes> <current_seconds>\n", argv[0]);
    } else {
        unsigned short int hours = atoi(argv[1]), minutes = atoi(argv[2]), seconds = atoi(argv[3]);

        if ((hours < 0) || (hours > 23)) {
            printf("Hours: Invalid input.\n");
            return 0;
        } else if ((minutes < 0) || (minutes > 59)) {
            printf("Minutes: Invalid input.\n");
            return 0;
        } else if ((seconds < 0) || (seconds > 59)) {
            printf("Seconds: Invalid input.\n");
            return 0;
        }

        system("clear");
        while (1) {
            if (seconds >= 59) {
                minutes++;
                seconds = 0;

                if (minutes >= 60) {
                    hours++;
                    minutes = 0;
                    if (hours > 23)
                        hours = 0; 
                }
            } else {
                seconds++;
            }
            printf("%02d:%02d:%02d\n", hours, minutes, seconds);
            sleep(1);
            system("clear");
        }
        return 0;
    }
}
#include <stdio.h>
#include <stdlib.h>

void find_next_flight(int desired_time, int *departure_time){
     if(desired_time<480){
        *departure_time = 480;
    }else if(desired_time>=480 && desired_time<583){
        *departure_time = 583;
    }else if(desired_time>=583 && desired_time<679){
        *departure_time = 679;
    }else if(desired_time>=679 && desired_time<767){
        *departure_time = 767;
    }else if(desired_time>=767 && desired_time<840){
        *departure_time = 840;
    }else if(desired_time>=840 && desired_time<945){
        *departure_time = 945;
    }else if(desired_time>=945 && desired_time<1140){
        *departure_time = 1140;
    }else if(desired_time>=1140 && desired_time<1215){
        *departure_time = 1305;
    }else{
        printf("No flight");
        exit(EXIT_SUCCESS);
    }
}
int main(void){
    int hour, minute,time,departure_time ,am_or_pm;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    time = 60*hour+minute;
    find_next_flight(time,&departure_time);

    if(departure_time>=720){
        printf("Closest *departure_time time is %.2d:%.2d p.m.",departure_time/60,departure_time%60);
    }else{
        printf("Closest *departure_time time is %.2d:%.2d a.m.",departure_time/60,departure_time%60);
    }
}
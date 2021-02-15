#include <stdio.h>
#include <ctype.h>

int day_of_year(int month,int day, int year);
void print_day(int n);

int main(void){
    
    print_day(day_of_year(2,21,2021));
    return 0;
}

int day_of_year(int month,int day, int year){
    int time=0;
    if(month<0||month>12||day<0||day>31||year<0){
        return -1;
    }
    if(month !=8 && month %2==0){
        if(day==31){
            return -1;
        }
    }
    //연도 계산
    for(int i=1;i<year;i++){
        if(year%400==0){
            time+=366;
            if(month==2&&day>=29){
                return -1;
            }
        }else if(year%100==0){
            time+=355;
            if(month==2&&day>=28){
                return -1;
            }
        }else if(year%4==0){
            time+=366;
            if(month==2&&day>=29){
                return -1;
            }
        } 
    }
    //날짜 계산
    for(int i=1;i<month;i++){
        if(i==2){
            if(year%400==0){
                time+=29;
            }else if(year%100==0){
                time+=28;
            }else if(year%4==0){
                time+=29;
            }   
        }else if(i!=8&&i%2==0){
            time+=30;
        }else{
            time+=31;
        }
    } 
    time+=day;   

}
void print_day(int n){
    if(n==-1){
        printf("Input correct day.");
    }else{
        if(n%7==0){
        printf("sunday");
        }
        if(n%7==1){
            printf("monday");
        }
        if(n%7==2){
            printf("tuesday");
        }
        if(n%7==3){
            printf("wednesday");
        }
        if(n%7==4){
            printf("thursday");
        }
        if(n%7==5){
            printf("friday");
        }
        if(n%7==6){
            printf("saturday");
        }
    }
}
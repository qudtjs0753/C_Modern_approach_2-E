#include <stdio.h>

int main(void){
    int days, startingDay, num;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startingDay);
    for(int i=0; i<startingDay; i++){
        printf("   ");
    }

    for(int i=1; i<days+1; i++){
        num= i+startingDay;
        if(num%7==0){
            printf(" %2d\n",i);
        }else{
            printf(" %2d",i);
        }
        
    }
    return 0;
}
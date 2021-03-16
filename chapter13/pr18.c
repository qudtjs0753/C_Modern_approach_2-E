#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    int month, date, year;
    char *month_name[] = {"January","February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("Enter a date (mm/dd/yyyy: ");
    scanf("%2d/%2d/%4d",&month, &date, &year);
    printf("You entered the date ");
    printf("%s %2d, %4d",month_name[month-1], date, year);
    
    return 0;
}


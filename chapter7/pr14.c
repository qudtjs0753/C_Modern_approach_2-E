#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(void){
    double x, y, division ,average;
    y = 1;
    printf("Enter a positive number: ");
    scanf("%lf", &x);
    division = x/y;
    average = (y+x/y)/2;
    while(fabs(division-average)>0.00001){
        y = average;
        division = x/y;
        average = (y+x/y)/2;
    }

    printf("Squre root: %.5lf", average);
    return 0;
}
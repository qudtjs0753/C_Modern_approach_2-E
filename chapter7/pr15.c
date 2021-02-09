#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(void){
    double num;
    long double facto =1;

    printf("Enter a positive integer: ");
    scanf("%lf", &num);
    for(int i=1; i<=num; i++){
        facto*=i;
        printf("%.0llf", facto);
    }
    printf("Factorial of %.0lf: %.0llf", num, facto);
}
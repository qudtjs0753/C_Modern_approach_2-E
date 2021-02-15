#include <stdio.h>
#include <math.h>

//If you want to link math.h header, use -lm when you compile.
double calculate_poly(double x);

int main(void){
    double x;
    printf("Enter a number: ");
    scanf("%lf", &x);
    printf("%lf", calculate_poly(x));
    return 0;
}

double calculate_poly(double x){
    double x1, x2, x3, x4;
    
    return 3*pow(x,5.0)+2*pow(x,4.0)-5*pow(x,3.0)-x*x+7*x-6;
}
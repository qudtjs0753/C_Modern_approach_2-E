#include <stdio.h>


void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
    do{
        *reduced_denominator = numerator%denominator;
        *reduced_numerator = denominator;
        numerator = *reduced_numerator;
        denominator = *reduced_denominator;
    }while(*reduced_denominator!=0);
}
int main(void){
    int num, denom, r_num, r_denom;
    printf("Enter a fration: ");
    scanf("%d/%d", &num, &denom);
    
   reduce(num,denom, &r_num,&r_denom);
    printf("In lowest terms: %d/%d", num/r_num, denom/r_num);
    return 0;
}
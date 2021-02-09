#include <stdio.h>

int main(void){
    int num, denom, r, num1, denom1, gcd;
    printf("Enter a fration: ");
    scanf("%d/%d", &num, &denom);
    num1 = num;
    denom1 = denom;
    
    while(num1% denom1!=0){
        r=num1% denom1;
        num1 =  denom1;
        denom1 = r;
    }
    printf("In lowest terms: %d/%d", num/denom1, denom/denom1);
    return 0;
}
#include <stdio.h>


double power(double x, int n);


int main(void){

    printf("%lf", power(3.0,3));
    return 0;
}

double power(double x, int n){
    if(n==0){
        return 1;
    }else{
        if(n%2==0){
            return power(x,n/2)*power(x,n/2);
        }else{
            return x*power(x,n-1);
        }
    }
}
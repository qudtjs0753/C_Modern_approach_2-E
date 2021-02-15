#include <stdio.h>

int gcd(int m, int n);

int main(void){
    printf("%d",gcd(78696,19332));
    
    return 0;
}

int gcd(int m, int n){
    int r;
    r = m%n;
    m = n;
    if(r==0){
        return m;
    }
    gcd(m,r);
}
#include <stdio.h>
#include <ctype.h>

int main(void){
    int a, b, c, d, e, f;
    a = sizeof(int);
    b = sizeof(short);
    c = sizeof(long);
    d = sizeof(float);
    e = sizeof(double);
    f = sizeof(long long);
    printf("%d, %d, %d, %d, %d ,%d", a, b, c, d, e, f);
    return 0;
}
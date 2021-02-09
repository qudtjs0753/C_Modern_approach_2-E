# include <stdio.h>

int main(void){
    int a, b, r, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    while(a%b!=0){
        r=a%b;
        a=b;
        b=r;
        printf("%d",b);
    }
    printf("Greatest common divisor: %d", b);

    return 0;
}
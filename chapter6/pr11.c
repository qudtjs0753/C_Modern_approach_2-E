#include <stdio.h>

int main(void){
    int n;
    float fraction,e;
    fraction = 1.00;
    
    printf("Enter a number :");
    scanf("%d",&n);

    for(int i=0;i<n+1;i++){
        for(int j=2;j<i+1;j++){
                fraction/=j;
          printf(" %f",fraction);
        }
        e+=fraction;
    }
    printf("apporximates e is %.2f", e);
    /*
    float epsilon;
    scanf("%f",&epsilon);
    while(fraction>epsilon){
        for(int i=0;i<n+1;i++){
            for(int j=2;j<i+1;j++){
                fraction/=j;
            }
        num+=fraction;
        }
    }
    */
    return 0;
}
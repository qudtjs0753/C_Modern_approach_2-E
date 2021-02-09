#include <stdio.h>

int main(void){
    float input, max;
    max = 0;
    input = 0;
     do {
        printf("Enter a Number: ");
        scanf("%f", &input);
        if(input>max){
            max = input;
        }
    }while(input!=0);
    printf("The largest number entered was %.1f", max);
    return 0;
}
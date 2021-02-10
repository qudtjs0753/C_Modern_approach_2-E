#include <stdio.h>
#include <stdlib.h>

int main(void){
    long number,temp;
    int count,digit;
    int digit_seen[10]={0};
    for(;;){
        printf("Enter a number(0 or less than 0 will be quit): ");
        scanf("%ld", &number);
        if(number<=0){
          break;
        }
        while(number>0){
            digit = number % 10;
            digit_seen[digit] += 1;
            number /= 10;
        }

        printf("Digit:      ");
    
        for(int i=0; i<10; i++){
            printf(" %d", i);
        }
        printf("\n");
        printf("Occurrences:");
        for(int i=0; i<10; i++){
          printf(" %d", digit_seen[i]);
        }
        printf("\n");
    }
    
    
    return 0;
}
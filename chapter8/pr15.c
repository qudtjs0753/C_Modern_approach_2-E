#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
    int shiftAmount = 0;
    int i = 0;
    char message[100];
    printf("Enter message to be encrypted: ");
    for(;;){
        message[i] = getchar();
        if(message[i]=='\n'){
            break;
        }
        i++;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shiftAmount);
    for(int j=0; j<=i; j++){
        //대문자
        if(message[j]>='A' && message[j] <='Z'){
            if(message[j]+shiftAmount>'Z'){
                message[j] += 'A'- 'Z'+ shiftAmount-1;
            }else{
                message[j] += shiftAmount;
            }
        //소문자
        }else if(message[j]>='a' && message[j] <='z'){
            if(message[j]+shiftAmount>'z'){
               message[j] +='a' - 'z'+ shiftAmount-1;
            }else{
                message[j] += shiftAmount;
            }
        }
    }

    for(int j=0; j<i; j++){
        putchar(message[j]);
    }
    return 0;
}
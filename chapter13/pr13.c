#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


void encrypt(char *message, int shift);

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
    encrypt(message, shiftAmount);

    printf("%s",message);
    return 0;
}

void encrypt(char *message, int shift){
    for(int j=0; j<=strlen(message); j++){
        //대문자
        if(message[j]>='A' && message[j] <='Z'){
            if(message[j]+shift>'Z'){
                message[j] += 'A'- 'Z'+ shift-1;
            }else{
                message[j] += shift;
            }
        //소문자
        }else if(message[j]>='a' && message[j] <='z'){
            if(message[j]+shift>'z'){
               message[j] +='a' - 'z'+ shift-1;
            }else{
                message[j] += shift;
            }
        }
    }
}

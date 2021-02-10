#include <stdio.h>
#include <ctype.h>

int main(void){
    int i=0;

    char phone_num[15];

    printf("Enter phone number(no more than 15 phone_num[i]long): ");
    while(1){
        phone_num[i] = getchar();
        if(phone_num[i]=='\n'){
            break;
        }
        if (phone_num[i] >= 'A' & phone_num[i]<= 'C')
        {
            putchar('2');
        }
        else if (phone_num[i]>= 'D' && phone_num[i]<= 'F')
        {
            putchar('3');
        }
        else if (phone_num[i]>= 'G' && phone_num[i]<= 'I')
        {
            putchar('4');
        }
        else if (phone_num[i]>= 'J' && phone_num[i]<= 'L')
        {
            putchar('5');
        }
        else if (phone_num[i]>= 'M' && phone_num[i]<= 'O')
        {
            putchar('6');
        }
        else if (phone_num[i]>= 'P' && phone_num[i]<= 'S')
        {
            putchar('7');
        }
        else if (phone_num[i]>= 'T' && phone_num[i]<= 'V')
        {
            putchar('8');
        }
        else if (phone_num[i]>= 'W' && phone_num[i]<= 'Y')
        {
            putchar('9');
        }
        else
        {
            putchar(phone_num[i]);
        }
        i++;
    }
    

    return 0;
}
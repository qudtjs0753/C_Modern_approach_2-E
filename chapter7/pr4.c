#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    ch = ' ';
    printf("Enter phone number: ");
    while(ch !='\n'){
        ch = getchar();
        if(ch>='A'& ch<='C'){
            putchar('2');
        }else if(ch>='D' && ch <='F'){
            putchar('3');
        }else if(ch>='G' && ch <='I'){
            putchar('4');
        }else if(ch>='J' && ch <='L'){
            putchar('5');
        }else if(ch>='M'&& ch <='O'){
            putchar('6');
        }else if(ch>='P'&& ch <='S'){
            putchar('7');
        }else if(ch>='T'&& ch <='V'){
            putchar('8');
        }else if(ch>='W'&& ch <='Y'){
            putchar('9');
        }else{
            putchar(ch);
        }
    }
    

    return 0;
}
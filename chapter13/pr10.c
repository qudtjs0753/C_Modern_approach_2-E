#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch = ' ';
    char last;
    int count = 0;
    printf("Enter a first and last name: ");
    last = getchar();
    while(getchar()!=' ');
    while(ch != '\n'){
        ch = getchar();
        if(ch == '\n'){
            printf(", %c",last);
        }else{
            putchar(ch);
        }
        
    }
    return 0;
}
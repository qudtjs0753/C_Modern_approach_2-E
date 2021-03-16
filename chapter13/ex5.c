#include <ctype.h>
#include <stdio.h>

void capitalize(char str[]){
    char *p = str;
    do{
    *p = toupper(*p);
    }while(*(p++));
} 

int main(void){
    char str[] = "abcde efghi";

    capitalize(str);
    printf("%s", str);

    return 0;
}
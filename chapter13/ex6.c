#include <stdio.h>
#include <string.h>


void censor(char str[]);

int main(void){
    char str[] = "fooa bcfoa";
    printf("1");
    censor(str);
    printf("%s", str);

    return 0;
}

void censor(char str[]){
    char *p  = str;
    int i = 0;
    int length = strlen(str);
    while(*p){
        if(*p=='f' && *(p+1) == 'o' && *(p+2) == 'o'){
            *(p++) = 'x';
            *(p++) = 'x';
            *(p++) = 'x';
            i+=3;
        }
        else{
            *p++;
        } 
    }
}
#include <stdio.h>


int strcmp(char *s, char *t){
    char *p1 = s, *p2 = t;
    
    while((*p1++ == *p2++)){
        if(*p1=='\0' || *p2=='\0')
            return 0;
    }
    return *p1 - *p2;
}

int main(void){
    char *str1 = "hello";
    char *str2 = "haha";
    printf("%d", strcmp(str1,str2));
    return 0;
}
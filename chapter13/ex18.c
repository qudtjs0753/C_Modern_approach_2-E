#include <stdio.h>
#include <string.h>

void remove_filename(char *url){
    char *p = url;
    int count = 0;
    while(count<2){
        if(*p++ == '/')
            count++;
    }
    while(*p++){
        if(*p=='/'){
            *p = '\0';
        }
    }
}

int main(void){
char url[] = "http://www.knking.com/index.html";
remove_filename(url);
printf("%s", url);
}
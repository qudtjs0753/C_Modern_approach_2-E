#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void get_extension(const char *file_name, char *extension) {

    while (*file_name) {
        if (*file_name++ == '.') {
            strcpy(extension, file_name);
            return;
        }
    }
    strcpy(extension, "");
}

bool test_extension(const char *file_name, const char *extension){
    char str[10];
    char *p = str, *q = extension;

    get_extension(file_name, str);
    while(*p!='\0'){
        if(toupper(*q++) != toupper(*p++)){
            return false;
        }
                
    }
    return true;
}

int main(void){
    printf("%d",test_extension("hello.txt", "txt"));


    return 0;
}




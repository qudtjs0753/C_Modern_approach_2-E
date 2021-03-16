#include <stdio.h>
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



int main(void){
    char *file_name = "hello.txt";
    char ex[10];
    get_extension(file_name,ex);
    printf("%s", ex);
    return 0;
}


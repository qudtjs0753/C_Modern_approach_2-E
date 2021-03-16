#include <stdio.h>
#include <string.h>

int main(void){
    char a[] = "abcde";
    char b[] = "cde";

    printf("%d", strcmp(a,b));
    return 0;
}
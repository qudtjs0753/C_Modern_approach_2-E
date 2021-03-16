#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


#define N 100

bool is_palindrome(const char *message);


int main(void){
    int i;
    char ch, *p1, *p2;
    char arr[N];
    for(i=0;i<N;i++)
        arr[i] = '\0';
    p1= arr;
    printf("Enter a message: ");
    while((ch=getchar())!='\n'){
        if((ch>='a' && ch <='z') || (ch>='A' && ch<='Z')){
            *p1 = tolower(ch);
            p1++;
        }
    }
    if(is_palindrome(arr)){
        printf("Palindrome");
        return 0;
    }
    printf("Not palindrome");

    return 0;
}

bool is_palindrome(const char *message){
    char *p1, *p2;
    p1 = message;
    p2 = message + strlen(message)-1;
    while(p2>p1){
        if(*p2-- != *p1++){
            return false;
        }
    }
    return true;
}

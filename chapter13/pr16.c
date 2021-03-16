#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

void reverse(char *message);

int main(void){
    char ch, *p;
    char arr[N];
    
    for(p=arr;p<arr+N;p++){
        *p = '\0';
    }

    p=arr;
    printf("Enter a message: ");
    while((ch=getchar())!='\n'){
        *p++ = ch;
    }
    reverse(arr);
    printf("Reversal is: %s", arr);

    return 0;
}

//여기서 문제 생김.
void reverse(char *message){
    char *p1 = message;
    char *p2 = message;
    while(*p2){
        p2++;
    }
    char temp;
    while(p2-- >p1){
        temp = *p2;
        printf("%c %c\n", *p1, *p2);
        *p2 = *p1;
        *p1++ = temp;
    }
    printf("%s", message);
}
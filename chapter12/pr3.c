#include <stdio.h>
#include <stdlib.h>

#define N 100


char* initialize(char arr[]){
    char *p;
    p = arr;
    for(p=arr;p<arr+N;p++){
        *p = ' ';
    }
    return arr;
}

int main(void){
    int i;
    char ch, *p;
    char arr[N];
    
    p = initialize(arr);
    printf("Enter a message: ");
    while((ch=getchar())!='\n'){
        *p = ch;
        p++;
    }
    printf("Reversal is: ");
    for(;p>=arr;p--){
        printf("%c", *p);
    }
    return 0;
}


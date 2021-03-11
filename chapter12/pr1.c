#include <stdio.h>
#include <stdlib.h>

#define N 100



int main(void){
    int i;
    char ch, *p;
    char arr[N];
    
    for(p=arr;p<arr+N;p++){
        *p = ' ';
    }
    p=arr;
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
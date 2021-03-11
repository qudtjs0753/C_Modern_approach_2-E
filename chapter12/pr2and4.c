#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define N 100



int main(void){
    int i, count=0;
    char ch, *p1, *p2;
    char arr[N];
    p1= arr;
    printf("Enter a message: ");
    while((ch=getchar())!='\n'){
        if((ch>='a' && ch <='z') || (ch>='A' && ch<='Z')){
            *p1 = tolower(ch);
            p1++;
            count++;
        }
    }

    //역으로 시작.
    for(p2=arr;p2<arr+count;p2++){
        if(*(--p1)==*p2){
        }
        else{
            printf("Not palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;
}
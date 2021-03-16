#include <stdio.h>
#include <ctype.h>
#define N 100

int main(void){
    char arr[N][30],ch,last=' ';
    int i = 0;
    int j = 0, index;
    printf("Enter a sentence: ");

    while((ch=getchar())!='\n'){
        if(ch== '?' || ch=='.' || ch==' '){
            if(ch== '.' || ch=='?' || ch=='!'){
                last = ch;
            }
            i+=1;
            j = 0;
        }else{
            arr[i][j] = ch;
            j++;
        }
    }
    
    printf("Reversal of sentense: ");
    for(;i>=0;i--)
        printf(" %s", arr[i]);
    printf("%c", last);
}
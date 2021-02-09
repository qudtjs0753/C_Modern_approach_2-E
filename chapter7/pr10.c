#include <stdio.h>
#include <ctype.h>

int main(void){
    int count = 0;
    char ch;

    printf("Enter a sentence: ");
    while(ch!='\n'){
        ch = toupper(getchar());

        if(ch == 'A' || ch =='E' || ch=='I' || ch=='O' || ch=='U'){
            count+=1;
        }
    }
    
    printf("Your sentence contains %d vowels", count);

    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    float wordCount = 0;
    float sum = 0;
    float average;

    ch = ' ';
    printf("Enter a sentence: ");
    while(ch != '.'){
        ch = getchar();
        if(ch==' ' || ch=='.'){
            wordCount+=1;
        }else{
            sum+=1;
        }
    }
    average = sum/wordCount;
    printf("Average word length: %.2f", average);
    return 0;
}
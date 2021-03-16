#include <stdio.h>
#include <ctype.h>

#define N 50
int main(void){
    char str[N];
    printf("Enter a sentence: ");
    scanf("%s", str);
    
    
    printf("Your sentence contains %d vowels", compute_vowel_count(str));

    return 0;
}

int compute_vowel_count(const char *sentence){
    int count = 0;
    char *p = sentence;
    char ch;
    while(*p){
        ch = toupper(*p++);

        if(ch == 'A' || ch =='E' || ch=='I' || ch=='O' || ch=='U'){
            count+=1;
        }
    }

    return count;

}
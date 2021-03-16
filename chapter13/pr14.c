#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//
bool are_anagrams(const char *word1, const char *word2);


int main(void){
    int num1[26]={0};
    int num2[26]={0};
    int i,j;
    char ch;
    char first[50]={' '}, second[50]={' '};
    printf("Enter first word: ");
    i=0;
    for(;;){
        ch=getchar();
        if(isalpha(ch)>0){
            first[i] = tolower(ch);
            i++;
        }
        if(ch=='\n'){
            break;
        }
    }

    printf("Enter second word: ");
    i=0;
     for(;;){
        if(isalpha(ch=getchar())>0){
            second[i] = tolower(ch);
            i++;
        }
        if(ch=='\n'){
            break;
        }
    }

    if(are_anagrams(first,second)){
        printf("The words are not anagrams.");
        return 0;
    }

    printf("The words are anagrams.");
    return 0;
    
}

bool are_anagrams(const char *word1, const char *word2){
    int i,num1[26],num2[26];
    for(i=0;i<strlen(word1);i++){
        num1[word1[i]-'a']+=1;
    }
    for(i=0;i<strlen(word2);i++){
        num2[word2[i]-'a']+=1;
    }

    for(i=0;i<26;i++){
        if(word1[i]!=word2[i]){
            return false;
        }
    }
    return true;

}
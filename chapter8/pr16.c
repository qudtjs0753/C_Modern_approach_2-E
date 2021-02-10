#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

//
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

    for(j=0;j<i;j++){
        num1[first[j]-'a']+=1;
    }
    

    printf("Enter second word: ");
    i=0;
    
     for(;;){
        if(isalpha(ch=getchar())>0){
            second[i] = tolower(ch);
            printf("1");
            i++;
        }
        if(ch=='\n'){
            break;
        }
    }

    for(j=0;j<i;j++){
        num2[second[j]-'a']+=1;
    }

    for(i=0;i<26;i++){
        if(num1[i]!=num2[i]){
            printf("The words are not anagrams.");
            return 0;
        }
    }
    printf("The words are anagrams.");
    return 0;
    
}
#include <stdio.h>
#include <string.h>

#define N 30
void sort(char words[][21]);


int main(void){
    int i=0;
    char words[N][21];
    char smallest_word[21], largest_word[21];

    do{
        printf("Enter word: ");
        scanf("%s", words[i]);
    }while(strlen(words[i++])!=4);

    sort(words);
    return 0;
}

void sort(char words[][21]){
    int i=0;
    char smallest_word[21];
    char largest_word[21];
    strcpy(smallest_word,words[0]);
    strcpy(largest_word,words[0]);
    while(strlen(words[i])!=0){
        if(strcmp(smallest_word,words[i])>=0){
            strcpy(smallest_word,words[i]);
        }else if(strcmp(largest_word,words[0])<=0){
            strcpy(largest_word, words[i]);
        }
        
        i++;
    }
    printf("smallest: %s\n", smallest_word);
    printf("largest: %s", largest_word);
}

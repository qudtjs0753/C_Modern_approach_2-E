#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int read_line(char str[],int n);
double compute_average_word_length(const char *sentence);



int main(void){
    char str[100];

    printf("Enter a sentence: ");
    read_line(str, 100);
    
    printf("Average word length: %.2f", compute_average_word_length(str));
    return 0;
}






double compute_average_word_length(const char *sentence){
    char *p=sentence;
    float wordCount = 0;
    float sum = 0;
    float average;

    while(*p){
        if(*p ==' ' || *p=='.'){
            wordCount+=1;
        }else{
            sum+=1;
        }
        p++;
    }
    average = sum/wordCount;
    return average;
}

int read_line(char str[],int n)
{
  int ch, i = 0;
  
  while((ch=getchar())!='\n')
    if(i<n)
      str[i++] = ch;
  str[i] = '\0'; //terminate string
  return i; //number of characters stored
}
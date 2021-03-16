#include <stdio.h>
#include <ctype.h>

#define N 30
int compute_scrabble_value(const char *word);

int main(void){
    char ch = ' ';
    char str[N];

    printf("Enter a word: ");
    scanf("%s", str);
    
    printf("Scrabble value: %d",compute_scrabble_value(str));
    return 0;
}

int compute_scrabble_value(const char *word){
    int sum=0;
    char ch;
    char *p = word;

    while(*p){
        ch = toupper(*p++);
        if(ch=='D' || ch =='G'){
            sum+=2;
        }else if(ch=='B' || ch=='C' || ch=='M' || ch=='P'){
            sum+=3;
        }else if(ch=='F' || ch=='H' ||ch=='V' ||ch=='W' ||ch=='Y'){
            sum+=4;
        }else if(ch=='K'){
            sum+=5;
        }else if(ch=='J' || ch=='X'){
            sum+=8;
        }else if(ch== 'Q' || ch =='Z'){
            sum+=10;
        }else if(ch=='\n'){
        }else{
            sum+=1;
        }
    }
    return sum;
}
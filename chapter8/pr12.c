#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch = ' ';
    char alphabet = ' ';
    int scrabble[26];
    int sum=0;

    printf("Enter a word: ");
    while(alphabet !='\n'){
        alphabet = getchar();
        ch = toupper(alphabet);
        if(ch=='D' || ch =='G'){
            scrabble[ch-'A'] = 2;
            sum+=scrabble[ch-'A'];
        }else if(ch=='B' || ch=='C' || ch=='M' || ch=='P'){
            scrabble[ch-'A'] = 3;
            sum+=scrabble[ch-'A'];
        }else if(ch=='F' || ch=='H' ||ch=='V' ||ch=='W' ||ch=='Y'){
            scrabble[ch-'A'] = 4;
            sum+=scrabble[ch-'A'];
        }else if(ch=='K'){
            scrabble[ch-'A'] = 5;
            sum+=scrabble[ch-'A'];
        }else if(ch=='J' || ch=='X'){
            scrabble[ch-'A'] = 8;
            sum+=scrabble[ch-'A'];
        }else if(ch== 'Q' || ch =='Z'){
            scrabble[ch-'A'] = 10;
            sum+=scrabble[ch-'A'];
        }else if(ch=='\n'){
        }else{
            scrabble[ch-'A'] = 1;
            sum+=scrabble[ch-'A'];
        }
    }
    printf("Scrabble value: %d", sum);
    return 0;
}
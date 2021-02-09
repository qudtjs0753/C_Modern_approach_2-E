#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch = ' ';
    char alphabet = ' ';
    int sum=0;

    printf("Enter a word: ");
    while(alphabet !='\n'){
        alphabet = getchar();
        ch = toupper(alphabet);
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
        printf("%d ", sum);
    }
    printf("Scrabble value: %d", sum);
    return 0;
}
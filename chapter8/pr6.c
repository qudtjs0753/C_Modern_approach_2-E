#include <stdio.h>
#include <ctype.h>

#define LENGTH ((int)sizeof(str)/sizeof(str[0]))

int main(void){
    int count=0;
    char ch,str[100];

    printf("Enter message: (Maximum: 100)");
    while(1){
        ch = getchar();
        if(ch=='\n'){
          break;
        }
        str[count] = ch;
        count++;
    }
    //처음에 위에다가 upstr[count] 선언했다가 count 0이라서 upstr[0]였음. variable length array 정의 시에 주의 할 것!!!
    char upstr[count];
// 여기가 문제.
    for(int i=0;i<count;i++){
        upstr[i] = toupper(str[i]);
/*
        if(upstr[i]=='A'){
            upstr[i] = '4';
        }else if(upstr[i]=='B'){
            upstr[i] = '8';
        }else if(upstr[i]=='E'){
            upstr[i] = '3';
        }else if(upstr[i]=='I'){
            upstr[i] = '1';
        }else if(upstr[i]=='O'){
            upstr[i] = '0';
        }else if(upstr[i]=='S'){
            upstr[i] = '5';
        }
*/
        switch(upstr[i]){
            case 'A':
              upstr[i]= '4';
              break;
            case 'B':
              upstr[i]= '8';
              break;
            case 'E':
              upstr[i]= '3';
              break;
            case 'I':
              upstr[i] = '1';
              break;
            case 'O':
              upstr[i] = '0';
              break;
            case 'S':
              upstr[i] = '5';
              break;
            default:
              break;
        }
    }

    for(int i=0; i<count;i++){
        putchar(upstr[i]);
    }
    printf("!!!!!!!!!!\n");
    return 0;
}
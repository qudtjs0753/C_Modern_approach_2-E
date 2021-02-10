#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define N 10

int main(void){
    char ch='A', arr[N][N];
    int random, i;
    int checkdigit;
    int x=0;
    int y=0;
    //arr 기본 .으로 설정.
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            arr[i][j] = '.';
        }
    }
    //문제: 돌아가는 경우를 생각하지 않음. 
    for(i=0; i<='z'-'a'; i++){
        checkdigit = 0;
        if(y<1 && x<1){
            while(!checkdigit){
                switch(rand()%2){
                case 0:
                  if(arr[y+1][x]=='.'){
                    y+=1;
                    arr[y][x] = ch;
                    checkdigit=1;
                  }
                  break;
                case 1:
                  if(arr[y][x+1]=='.'){
                    x+=1;
                    arr[y][x] = ch;
                    checkdigit=1;
                  }
                  break;
                default:
                break;
                }
            }
        }else if(y<1 || x<1){
            if(x<1){
                if(y>N-2){
                    while(!checkdigit){
                        switch(rand()%2){
                        case 0:
                        if(arr[y][x+1]=='.'){
                            x+=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        case 1:
                        if(arr[y-1][x]=='.'){
                            y-=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        default:
                        break;
                        }
                    }
                }else{
                    while(!checkdigit){
                        switch(2){
                        case 0:
                        if(arr[y][x+1]=='.'){
                            x+=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        case 1:
                        if(arr[y-1][x]=='.'){
                            y-=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        case 2:
                        if(arr[y+1][x]=='.'){
                            y+=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        default:
                        break;
                        }
                    }
                }
            }else{
                if(x>N-2){
                    while(!checkdigit){
                        switch(rand()%2){
                        case 0:
                        if(arr[y+1][x]=='.'){
                            y+=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        case 1:
                        
                        if(arr[y][x-1]=='.'){
                            x-=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        default:
                        break;
                        }
                    }
                }else{
                    while(!checkdigit){
                        switch(rand()%3){
                        case 0:
                        if(arr[y+1][x]=='.'){
                            y+=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        case 1:
                        if(arr[y][x]=='.'){
                            x-=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        case 2:
                        if(arr[y][x]=='.'){
                            x+=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        default:
                        break;
                        }
                    } 
                }
            }
        }else{
            if(y>N-2 && x>N-2){
                while(!checkdigit){
                    switch(rand()%2){
                    case 0:
                    
                    if(arr[y][x-1]=='.'){
                        x-=1;
                        arr[y][x] = ch;
                        checkdigit=1;
                    }
                    break;
                    case 1:
                    
                    if(arr[y-1][x]=='.'){
                        y-=1;
                        arr[y][x] = ch;
                        checkdigit=1;
                        }
                    break;
                    default:
                    break;
                    }
                }
               
            }else if(y>N-2 || x>N-2){
                if(y>N-2){
                    while(!checkdigit){
                        switch(rand()%3){
                        case 0:
                        
                        if(arr[y][x+1]=='.'){
                            x+=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        case 1:
                        if(arr[y-1][x]=='.'){
                            y-=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        case 2:
                        if(arr[y][x-1]=='.'){
                            x-=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        default:
                        break;
                    }
                    }
                }else{
                    while(!checkdigit){
                        switch(rand()%3){
                        case 0:
                        if(arr[y+1][x]=='.'){
                            y+=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        case 1:
                        if(arr[y][x-1]=='.'){
                            x-=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        case 2:
                        if(arr[y][x]=='.'){
                            y-=1;
                            arr[y][x] = ch;
                            checkdigit=1;
                        }
                        break;
                        default:
                        break;
                        }
                    } 
                }
            }else{
                while(!checkdigit){
                    switch(rand()%4){
                    case 0:
                    if(arr[y][x+1]=='.'){
                        x+=1;
                        arr[y][x] = ch;
                        checkdigit=1;
                    }
                    break;
                    case 1:
                   if(arr[y+1][x]=='.'){
                        y+=1;
                        arr[y][x] = ch;
                        checkdigit=1;
                    }
                    break;
                    case 2:
                   if(arr[y][x-1]=='.'){
                        x-=1;
                        arr[y][x] = ch;
                        checkdigit=1;
                    }
                    break;
                    case 3:
                    if(arr[y-1][x]=='.'){
                        y-=1;
                        arr[y][x] = ch;
                        checkdigit=1;
                    }
                    break;
                    default:
                    break;
                }
                }
                
            }
        }
        ch+=1;
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}
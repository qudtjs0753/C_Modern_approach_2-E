#include <stdio.h>
#include <ctype.h>

int evaluate_position(char board[8][8]);

int main(void){
    char board[8][8] = {'K','Q','R','B','k','q','r','b','p','p'};

    printf("%d", evaluate_position(board));

    return 0;
}

int evaluate_position(char board[8][8]){
    int white_score = 0;
    int black_score = 0;

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j]==toupper(board[i][j])){
                if(board[i][j]=='Q') black_score+=9;
                else if(board[i][j]=='R') black_score+=5;
                else if(board[i][j]=='B') black_score+=3;
                else if(board[i][j]=='N') black_score+=3;
                else if(board[i][j]=='P') black_score+=1;
            }else{
                if(board[i][j]=='q') white_score+=9;
                else if(board[i][j]=='r') white_score+=5;
                else if(board[i][j]=='b') white_score+=3;
                else if(board[i][j]=='n') white_score+=3;
                else if(board[i][j]=='p') white_score+=1;
            }
        }
        if(black_score>white_score){
            return -1;
        }else if(black_score<white_score){
            return 1;
        }
    }
}
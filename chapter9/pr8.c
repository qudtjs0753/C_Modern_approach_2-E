#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(void){
    int win, lose;
    win=0;
    lose=0;
    char again = ' ';
    while(again !='n' && again!='N'){
      if(play_game()){
          printf("You win!\n\n");
          win+=1;
      }else{
          printf("You lose!\n\n");
          lose+=1;
      }
      printf("Play again?(y or n)");
      scanf("%c", &again);
      if(again!='n' && again!='N' && again!='Y' && again!='y'){
          printf("Please type only y or n.");
          scanf("%c", &again);
      }
    }
    printf("Wins: %d  Losses: %d", win, lose);
    
    return 0;
}

int roll_dice(void){
    int ran1,ran2;
    ran1 = rand()%6+1;
    ran2 = rand()%6+1;
    return ran1+ran2;
}

bool play_game(void){
    int rolled, point,win,lose;
    rolled = roll_dice();
    printf("You rolled: %d\n", rolled);
    //check first roll
    if(rolled==7||rolled==11){
        
        return true;
    }else if(rolled==2||rolled==3||rolled==12){
        
        return false;
    }
    point = rolled;
    printf("your point is %d\n", point);
    do{
      rolled = roll_dice();
      printf("You rolled: %d\n", rolled);
      if(rolled==7){
          return false;
      }
    }while(rolled!=point);
    return true;
}
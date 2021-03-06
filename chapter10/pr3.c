#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

//external variables
bool straight, flush, four, three;
int pairs; //can be 0, 1, or 2
int same;
int rank_suit[5][2]={1,5,2,4,3,3,4,2,5,1};
//prototype
void read_cards(void);
void analyze_hand(void);
void print_result(void);
bool isDuplicate(int rank, int suit, int arr[NUM_CARDS][2]);
void quick_sort(int arr[NUM_CARDS][2], int low, int high);
int split(int a[NUM_CARDS][2], int low, int high);

//Calls read_cards, analyze_hand, print_result
int main(void){
  for(;;){
      read_cards();
      analyze_hand();
      print_result();
  }
}

//quick sort
void quick_sort(int arr[NUM_CARDS][2],int low, int high){
  int middle;

  if(low>=high) return;
  middle = split(arr,low,high);
  quick_sort(arr,low,middle-1);
  quick_sort(arr,middle+1,high);
}

int split(int a[NUM_CARDS][2], int low,int high){
    int part_element1 = a[low][0];
    int part_element2 = a[low][1];

    for(;;){
        while(part_element1>=a[high][0] && low<high){
            high--;
        }
        if(low>=high)break;
        a[low][0] = a[high][0];
        a[low][1] = a[high][1];
        low++;

        while(part_element1<=a[low][0] && low<high){
            low++;
        }
        if(low>=high)break;
        a[high][0] = a[low][0];
        a[high][1] = a[low][1];
        high--;
    }
    a[high][0] = part_element1;
    a[high][1] = part_element2;
    return high;
}
// check duplicate card
bool isDuplicate(int rank, int suit, int arr[NUM_CARDS][2]){
    int i;
    for(i=0;i<5;i++){
        if(arr[i][0]==rank && arr[i][1]==suit){
            return true;
        }
    }
    return false;
}

void read_cards(void){
    char ch, rank_ch, suit_ch;
    int rank, suit, i, j;
    bool bad_card,duplicate;
    int card_exist[5];
    int cards_read = 0;

    /*for(rank = 0; rank <NUM_RANKS; rank++){
        num_in_rank[rank] = 0;
        for (suit = 0; suit < NUM_SUITS; suit++){
            card_exists[rank][suit] = false;
        }
    }
    for(suit = 0; suit <NUM_SUITS; suit++){
       num_in_suit[suit] = 0;
    }*/
    
    for(i = 0; i<NUM_CARDS; i++){
        for(j=0; j<2; j++){
            rank_suit[i][j] = 0;
        }
    }


    for(i=0;i<5;) {
        bad_card = false;
        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch){
            case '0':           exit(EXIT_SUCCESS);
            case '2':           rank = 0; break;
            case '3':           rank = 1; break;
            case '4':           rank = 2; break;
            case '5':           rank = 3; break;
            case '6':           rank = 4; break;
            case '7':           rank = 5; break;
            case '8':           rank = 6; break;
            case '9':           rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default:            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch) {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ') bad_card = true;
        
        if(bad_card)
            printf("Bad card; ignored.\n");
        else if(isDuplicate(rank,suit,rank_suit)){
            printf("Duplicate card; ignored.\n");
        }
        else {
            rank_suit[i][0] = rank;
            rank_suit[i][1] = suit;
            i++;
        }
    }
}


void analyze_hand(void){
    int rank=0;
    int count;
    int i, duplicateNum=0;
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;
    //sort
    quick_sort(rank_suit,0,4);

    //check for flush
    for (i=0; i <NUM_CARDS-1; i++){
        if (rank_suit[i][1] == rank_suit[i+1][1]){
          duplicateNum++;
        }
        if(duplicateNum==4){
            flush = true;
        }
    }
      
        
    
    //check for straight
    int max = 0;
    count = 0;
    for (i=0; i <NUM_CARDS-1; i++){
        if(rank_suit[i][0]==rank_suit[i+1][0]+1){
            count++;
        }
    }
    if (count==4) straight = true;
        
   
    // check for 4-of-a-kind, 3-of-a-kind, and pairs
    count = 0;
    
    for (i = 0; i < NUM_CARDS; i++){
        for(int j=i+1; j<NUM_CARDS;j++){
          if(rank_suit[i][0]==rank_suit[j][0]) count++;
        }
        if (count == 3) four = true;
        if (count ==2) three = true;
        if (count == 1) pairs++;
    }
}

void print_result(void){
    if(straight && flush) printf("Straight flush");
    else if(four)         printf("Four of a kind");
    else if(three &&
            pairs == 1)   printf("Full house");
    else if(flush)        printf("Flush");
    else if(straight)     printf("Straight");
    else if(three)        printf("Three of a kind");
    else if(pairs == 2)   printf("Two Pair");
    else if(pairs == 1)   printf("Pair");
    else                  printf("High card");

    printf("\n\n");
}


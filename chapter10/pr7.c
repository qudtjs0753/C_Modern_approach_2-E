#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_DIGITS 10

//external variable
int segment[10][9] = {{0,1,0,1,0,1,1,1,1},{0,0,0,0,0,1,0,0,1},{0,1,0,0,1,1,1,1,0},{0,1,0,0,1,1,0,1,1},{0,0,0,1,1,1,0,0,1},{0,1,0,1,1,0,0,1,1},{0,1,0,1,1,0,1,1,1},{0,1,0,1,0,1,0,0,1},{0,1,0,1,1,1,1,1,1},{0,1,0,1,1,1,0,0,1}};
int digits[3][MAX_DIGITS*4];

//prototype
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);


int main(void){
  int nums[MAX_DIGITS];
  int i=0;
  char ch;
  clear_digits_array();
  printf("Enter a number: ");
  do{
    if(ch>='1' && ch<='9'){
      process_digit(ch-48, i++);
      if(i>8){
        break;
      }
    }
  }while((ch=getchar())!='\n');
  print_digits_array();
 
}


void allocate(int position, int number,int arr[3][40],int arr1[10][9]){
    int i;
    for(i=0;i<3;i++){
      arr[i][4*position] = arr1[number][3*i];
      arr[i][4*position+1] = arr1[number][3*i+1];
      arr[i][4*position+2] = arr1[number][3*i+2];
     
    }
}

void clear_digits_array(void){
  for(int i=0;i<3;i++){
    for(int j=0;j<MAX_DIGITS*4;j++){
      digits[i][j] = 0;
    }
  }
}


 
void process_digit(int digit, int position){
  int i,j;
  if(digit == 1){
    allocate(position,digit,digits,segment);   
  }else if(digit ==2){
    allocate(position,digit,digits,segment);
  }else if(digit ==3){
    allocate(position,digit,digits,segment);
  }else if(digit ==4){
    allocate(position,digit,digits,segment);
  }else if(digit ==5){
    allocate(position,digit,digits,segment);
  }else if(digit ==6){
    allocate(position,digit,digits,segment);
  }else if(digit ==7){
    allocate(position,digit,digits,segment);
  }else if(digit ==8){
    allocate(position,digit,digits,segment);
  }else if(digit ==9){
    allocate(position,digit,digits,segment);
  }
}

void print_digits_array(void){
  int i,j;
  for(j=0;j<3;j++){
    for(i=0;i<MAX_DIGITS*4;i++){
      if(digits[j][i]==0){
        printf(" ");
      }else if(j==0){
        if(digits[j][i]==1){
          printf("_");
        }
      }else if(j==1 || j==2){
        if(i%2==0&&digits[j][i]==1){
          printf("|");
        }else if(i%2==1&&digits[j][i]==1){
          printf("_");
        }
      }
      if(i==MAX_DIGITS*4-1){
        printf("\n");
      }
    }
  }
  
}


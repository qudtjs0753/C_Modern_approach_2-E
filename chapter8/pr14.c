#include <stdio.h>

#define N 100
int main(void){
  char arr[N],ch,last;
  int i = 0;
  int j, index;
  printf("Enter a sentence: ");
  while((ch=getchar())!='\n'){
      arr[i] = ch;
      if(ch=='?' || ch=='.')
          break;
      i++;
  }
  index = i;
  if(arr[i]== '.' || arr[i]=='?' || arr[i]=='!'){
        last = arr[i];
    }
  printf("Reversal of sentense: ");
  for(;i>=0;i--){
     if(arr[i]== ' '){
         for(j=i+1;j<index;j++){
             printf("%c", arr[j]);
         }
        printf(" ");
        index = i;
     }
     if(i==0){
         for(j=i;j<index;j++){
             printf("%c" , arr[j]);
         }
     }
  }
   printf("%c", last);
}
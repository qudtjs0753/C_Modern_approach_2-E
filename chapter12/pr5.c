#include <stdio.h>

#define N 100
int main(void){
  char arr[N],ch,last;
  char *p1 = arr;
  char *p2, *index;

  printf("Enter a sentence: ");
  while((ch=getchar())!='\n'){
      *p1 = ch;
      if(ch=='?' || ch=='.')
          break;
      p1++;
  }
  index = p1;
  if(*p1== '.' || *p1=='?' || *p1=='!'){
        last = *p1;
    }
  printf("Reversal of sentense: ");
  for(;p1>=arr;p1--){
     if(*p1== ' '){
         for(p2=p1+1;p2<index;p2++){
             printf("%c", *p2);
         }
        printf(" ");
        index = p1;
     }
     if(p1==arr){
         for(p2=p1;p2<index;p2++){
             printf("%c" , *p2);
         }
     }
  }
   printf("%c", last);
}
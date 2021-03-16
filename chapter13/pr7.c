#include <stdio.h>


int main(void){
    int num,index,tenth;
    char *first[] = {"one", "two", "three", "four", "five","six","seven","eight","nine"};
    char *tenDigit[] = {"ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen","eighteen","nineteen"};
    char *ten[]= {"twenty", "thirty", "fourty","fifty", "sixty","seventy", "eighty","ninty"};
    printf("Enter a two-digit number: ");
    scanf("%2d", &num);
    printf("You enterer the number ");
    if(num<0){
        printf("Error");
    }else if(num==0){
        printf("0");
    }else if(num<10){
        printf("%s", first[num-1]);
    }else if(num<20){
        index = num%10;
        printf("%s", tenDigit[index]);
    }else{
        tenth = num/10-2;
        index = num%10-1;
        printf("%s-%s",ten[tenth],first[index]);
    }

    return 0;
}
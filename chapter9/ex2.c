#include <stdio.h>
#include <ctype.h>

int check(int x,int  y,int n);

int main(void){
    printf("%d", check(5,4,3));
    return 0;
}

int check(int x,int y, int n){
    if(x<n&&x>0&&y<n&&y>0){
        return 1;
    }
    else{
        return 0;
    }
}
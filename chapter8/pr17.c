#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
    int i,j,n,x,y,x_temp,y_temp;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be and odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    for(;;){
        scanf("%d", &n);
        int magic_square[n][n];
        for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                     magic_square[i][j] = 0;
                }
            }

        if(n>99 || n<1 || n%2==0){
            printf("Wrong number. Input again.");
        }else{
            x=(n-1)/2;
            y=0;
            for(i=0;i<n*n;i++){
                magic_square[y][x] = i+1;
                x_temp = x;
                y_temp = y;
                if(y<1){
                    y=n-1;
                }else{
                    y-=1;
                }
                if(x>n-2){
                    x=0;
                }else{
                    x+=1;
                }
                if(magic_square[y][x]!=0){
                    y=y_temp+1;
                    x=x_temp;
                }
            }

            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    printf("%2d  ", magic_square[i][j]);
                }
                printf("\n");
            }
            return 0;
        }
    }
}
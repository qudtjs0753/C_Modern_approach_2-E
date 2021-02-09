#include <stdio.h>
#include <ctype.h>

int main(void){
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    //scanf로 받으면서 \n은 버퍼에 남아있으므로 이를 소모해주기 위해 getchar()이용.
    //비워주지 않으면 첫 24번째 square에서 버퍼에 남아있던 \n을 getchar()이 자동으로 받아버려 넘어가버림.
    getchar();
    for (i = 1; i<=n; i++){
        printf("%10d%10d\n",i, i*i);
        
        if(i%24==0){
            printf("Press Enter to continue...");
            while(getchar() != '\n');
        }
    }

    return 0;
}
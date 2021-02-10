#include <stdio.h>
#include <ctype.h>

int main(void){
    int arr[5][5], i, j;
    int sum[2][5]={0};
    for(i=0; i<5; i++){
        printf("Enter row %d : ", i+1);
        for(j=0; j<5; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            sum[0][i] += arr[i][j];
            sum[1][i] += arr[j][i];
            printf("%d, %d  ", sum[0][i],sum[1][i]);
        }
    }

    printf("Row totals: %d %d %d %d %d\n", sum[0][0], sum[0][1],sum[0][2],sum[0][3],sum[0][4]);
    printf("Column totals: %d %d %d %d %d", sum[1][0], sum[1][1],sum[1][2],sum[1][3],sum[1][4]);

    printf("average score of each student: %f %f %f %f %f", (float)sum[0][0]/5,(float)sum[0][0]/5, (float)sum[0][1]/5,(float)sum[0][2]/5,(float)sum[0][3]/5,(float)sum[0][4]/5);
    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main(void){
    int num1, denom1, num2, denom2, result_num, result_denom,r ;
    char sign;
    printf("Enter two fractions separated by sign: ");
    scanf("%d/%d%c%d/%d",&num1,&denom1,&sign,&num2,&denom2);
    if(sign=='/'){
        result_num = num1*denom2;
        result_denom = num2*denom1;
        printf("The division is: %d/%d\n", result_num,result_denom);
    }else if(sign=='*'){
        result_num = num1*num2;
        result_denom = denom1*denom2;
        printf("The division is: %d/%d\n", result_num,result_denom);
    }else if(sign=='+'){
        result_num = num1*denom2 + num2*denom1;
        result_denom = denom1 * denom2;
        printf("The division is: %d/%d\n", result_num,result_denom);
    }else if(sign=='-'){
        result_num = num1*denom2 - num2*denom1;
        result_denom = denom1 * denom2;
        printf("The division is: %d/%d\n", result_num,result_denom);
    }else{
      printf("Error");
    }
    num1 = result_num;
    num2 = result_denom;
    while(num1% denom1!=0){
        r=num1% denom1;
        num1 =  denom1;
        denom1 = r;
    }
    printf("smallest division is %d/%d", result_num/denom1,result_denom/denom1);
    return 0;
}


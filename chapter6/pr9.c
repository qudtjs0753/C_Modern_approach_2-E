#include <stdio.h>

int main(void){
    float loan, interest, payment,balance;
    int n;
    printf("Enter amoun of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter number of payments: ");
    scanf("%d", &n);
    interest/=1200;

    for(int i=0; i<n; i++){
        balance = (loan-payment)+loan*interest;
        printf("Balance remaining after %dth payment: %.2f\n", i+1 ,balance);
        loan = balance;
    }

    return 0;
}
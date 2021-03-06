#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100
void print(int );
int rpn(void);

//external variable
int contents[STACK_SIZE];
int top = 0;
int count1=0, count2=0;
char ch;

void make_empty(void){
    top = 0;
}

bool is_empty(void){
    return top>1 && ch == '=';
}

//여기 예외처리에서 조금 애먹음. 
bool too_many(void){
    return top == 0 && ch =='=';
}
void stack_overflow(void){
  printf("Expression is too complex");
  exit(EXIT_FAILURE);
}
void stack_underflow(void){
    printf("Not enough operands in expression");
    exit(EXIT_FAILURE);
}

void push(int i){
    if(too_many()){
        stack_overflow();
    }else{
        contents[top++] = i;
    }
}

int pop(void){
    if(is_empty()){
        stack_underflow();
    }else{
        return contents[--top];
    }
}

int main(){
    printf("%d", rpn());
    
}

int rpn(void){
    int  value;
    int stack1 ,stack2;

    printf("Enter an RPN expression: ");
    for(;;){
        scanf(" %c", &ch);
        if(ch>='0' && ch<='9'){
            push(ch-48);
        }else if(ch=='*'){
            stack1 = pop();
            stack2 = pop();
            push(stack2*stack1);
        }else if(ch=='-'){
            stack1 = pop();
            stack2 = pop();
            push(stack2-stack1);
        }else if(ch=='+'){
            stack1 = pop();
            stack2 = pop();
            push(stack2+stack1);
        }else if(ch=='/'){
            stack1 = pop();
            stack2 = pop();
            push(stack2/stack1);
        }else if(ch=='q'){
            exit(EXIT_SUCCESS);
        }else if(ch=='='){
            return pop();
        }else{
            printf("Wrong input!");
        }
    }
}
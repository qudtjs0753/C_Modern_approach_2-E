#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
//external variable
char contents[STACK_SIZE];
int top = 0;

void make_empty(void){
    top = 0;
}

bool is_empty(void){
    return top == 0;
}

bool is_full(void){
    return top==STACK_SIZE;
}
void stack_overflow(void){
  printf("You over maximum stack size");
  exit(EXIT_FAILURE);
}
void stack_underflow(void){
    printf("Doesn't matched");
    exit(EXIT_FAILURE);
}

void push(char c){
    if(is_full()){
        stack_overflow();
    }else{
        contents[top++] = c;
    }
}

char pop(void){
    if(is_empty()){
        stack_underflow();
    }else{
        return contents[--top];
    }
}


int main(void){
    int i;
    char ch,is_match;
    printf("Enter parentheses and/or braces: ");
    for(i= 0; i<STACK_SIZE; i++){
        ch = getchar();
        if(ch=='{' || ch=='('){
            push(ch);
        }else if(ch==')' ||ch=='}'){
            is_match = pop();
            if(ch==')'&&is_match=='{' || ch=='}'&&is_match=='('){
                printf("Dosen't matched");
                exit(EXIT_FAILURE);
            }
        }
        if(ch=='\n'){
            if(is_empty()){
                printf("Parentheses/braces are nested properly");
                exit(EXIT_SUCCESS);
            }
            printf("Dosen't matched");
            exit(EXIT_SUCCESS);
        }
    }
}
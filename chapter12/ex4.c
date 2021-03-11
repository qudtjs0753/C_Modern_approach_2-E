#include <stdbool.h>

#define STACK_SIZE 100
//external variable
int contents[STACK_SIZE];
int top = 0;
int *top_ptr;

void make_empty(void){
    *top_ptr = &contents[0];
}

bool is_empty(void){
    return top_ptr == &contents[0];
}

bool is_full(void){
    return top_ptr== &contents[STACK_SIZE-1];
}

void push(int i){
    if(is_full()){
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

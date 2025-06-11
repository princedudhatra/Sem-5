#include<stdio.h>

#define size 100

int stack[size];
int top = -1;

void push(int value){
    if(top >= size-1){
        printf("stack overflow.");
    }
    else{
        stack[++top] = value;
        printf("%d is pushed. \n",value);
    }
}

void pop(){
    if(top <= -1){
        printf("Stack is underflow.");
    }
    else{
        printf("Element is poped : %d \n", stack[top--]);
    }
}

void peep(){
    if(top <= -1){
        printf("Stack is underflow.");
    }
    else{
        printf("Element is peeped : %d \n", stack[top]);
    }
}

void change(int index,int value){
    if(index < 0 || index > top){
        printf("Stack is underflow or overflow.");
    }
    else{
        printf("Value changed at index %d \n",index);
        stack[index] = value;
    }
}

void display(){
    if(top <= -1){
        printf("Stack is underflow.");
    }
    else{
        printf("Stack Elements :");
        for(int i=top ; i>=0 ; i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
    
}

int main() {
    push(30);
    push(40);
    push(50);
    push(60);
    change(2,70);
    display();
    pop();
    peep();
    display();
    return 0;
}
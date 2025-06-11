#include<stdio.h>

#define size 100

int queue[size];
int front = -1;
int rear = -1;

void enqueue(int value){
    if(rear == size -1){
        printf("Queue Overflow;");
    }
    if(front == -1){
        front=0;
    }
    rear++;
    queue[rear] = value;
    printf("%d is inserted in queue.",value);
}

int dequeue(){
    if(front == -1 || front >rear){
        printf("Queue underflow.");
        return -1;
    }
    int value = queue[front];
    front++;
    if(front > rear){
        front = rear = -1;
    }
    printf("%d is deleted",value);
    return value;
}

void display(){
    
}
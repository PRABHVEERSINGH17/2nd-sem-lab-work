#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front=-1,rear=-1;
int isFull(){
    return ((rear==MAX_SIZE-1 && front==0)||(rear==front));
}
int isEmpty(){
    return(front==-1);
}
void enqueue(int item){
    if(isFull()){
        printf("Queue Overflow\n");
        return;
    }else if(front==-1){
        front=rear=0;
    }else if(rear==MAX_SIZE-1){
        rear=0;
    }else{
        rear++;
    }
    queue [rear]=item;
    printf("%d enqueue to queue\n",item);
}
int dequeue(){
    int item;
    if(isEmpty()){
        printf("Queue underflow!!\n");
        exit(1);
    }
    item=queue[front];
    if(front==rear){
        front=rear=-1;
    }
    else if(front==MAX_SIZE-1){
        front=0;
    }
    else{
        front++;
    }
    return item;  
}
void display(){
    int i;
    if(isEmpty()){
        printf("queue is empty\n");
        return;
    }
    printf("queue elements:");
    if(rear>=front){
        for(i=front;i<=rear;i++)
        printf("%d",queue[i]);
    }else{
        for(i=front;i<MAX_SIZE;i++)
        printf("%d",queue[i]);
        for(i=0;i<=rear;i++)
        printf("%d",queue[i]);
    }
    printf("\n");
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    printf("Dequeued item:%d\n",dequeue());
    printf("Dequeued item:%d\n",dequeue());
    display();
    enqueue(60);
    enqueue(70);
    display();
    return 0;
}
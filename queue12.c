#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
struct queue{
    int front;
    int rear;
    int items[MAX_SIZE];
};
void enqueue(struct queue*q,int data){
    if((q->rear+1)%MAX_SIZE==q->front){
        printf("queue is full\n");
    }else{
        q->items[q->rear]=data;
        q->rear=(q->rear+1)%MAX_SIZE;
    }
}
int dequeue(struct queue*q){
    if(q->front == q->rear){
        printf("Queue is empty");
        return -1;
    }else{
        int data=q->items[q->front];
        q->front=(q->front+1)%MAX_SIZE;
        return data;
    }
}
int main(){
    struct queue*q=(struct queue*)malloc(sizeof(struct queue));
    q->front=0;
    q->rear=0;
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    printf("%d\n",dequeue(q));
    printf("%d\n",dequeue(q));
    printf("%d\n",dequeue(q));
    return 0;
}
#include<stdio.h>
#define MAX 100
int queue[MAX],priority[MAX];
int front=-1,rear=-1;
int isfull(){
    return rear==MAX-1;
}
int isempty(){
    return front==-1;
}
void enqueue(int value,int priority){
    if(isfull())
    printf("queue is overflow!!!!");
    else{
        queue[++rear]=value;
        priority[rear]=priority;
        if(front==-1)
        front=rear;
        printf("Element Added in queue !!!!");
    }
}
void display(){
    if(isempty())
    printf("Queue is empty !!!!\n");
    else{
        int i;
        for(i=front; i<=.rear;i++)
        printf("(%d,%d)\n",queue[i],priority[i]);
    }
}
int main(){
    while(1){
        system("cls");
        printf("**** priority queue ****\n");
        printf("1.enqueue");
        printf("2.dequeue");
        printf("3.display\n");
        printf("4.exit\n");
        int choice,value,priority;
        printf("\enter priority");
        scanf("%d",&priority);
        enqueue(val,priority);
        break;
        case 2:
        break;
        case 3:
        display();
        case 4:
        exit(0);
        default:
        printf("invaild choice !!!!!");
    }
system("cls");
}
return 0;

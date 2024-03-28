#include<stdio.h>
#define MAX 100
int queue[MAX],front=-1,rear=-1;
int isfull(){
    return rear==MAX-1;
}
int isempty(){
    return front==-1;
}
void enqueue(int value){
    if(isfull()){
printf("Queue Overflow!!!!");
    }
    else{
        queue[++rear]=value;
        if(front==-1)
        front=rear;
        printf("%d added in queue!!!!");
    }
}
void dequeue(){
    if(isempty()|| front>rear){
        printf("queue  underflow!!!!");
    }
    else{
        int value=queue[front++];
        if(front>rear)
        front=rear=-1;
        printf("%d element removed from the queue!!!!",value);
    }
}
int peek(){
    if(isempty()||front>rear)
    return -1;
    else
    return queue[front];
}
void display(){
    int i;
    if(isempty())
    printf("Queue is empty!!!!");
    else{
        for(i=front;i<=rear;i++)
        printf("%d\t",queue[i]);
    }
}
int main(){
    int choice,val;
    while(1){
        system("cls");
        printf("1 .Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter value :");
            scanf("%d",&val);
            enqueue(val);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            val=peek();
            if(val==-1)
            printf("queue is empty !!!!");
           else
           printf("%d is available in front of queue !!!!",val);
           break;
           case 4:
           display();
           break;
           case 5:
           exit(0);
           break;
           default:
           printf("invalid choice!!!!");
                   }
                   printf("\n");
                   system("pause");
    }
return 0;
}
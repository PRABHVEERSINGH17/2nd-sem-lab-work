#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*head=NULL;
struct Node*createNode(){
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    printf("enter the data:");
    scanf("%d",&temp->data);
    temp->next=NULL; 
    return temp;
}
void createlist(){
    int n,i;
    printf("Enter total size of list:");
    scanf("%d",&n);
    struct Node*temp;
    for(i=1;i<=n;i++){
        struct Node*newNode=createNode();
        if(head==NULL)
            head=newNode;                                                                                    
        else
            temp->next=newNode;
        temp=newNode;
    }
}
void insertNodeAtAnyPos()
{
    if(head==NULL){
        printf("List is Empty!!!!!!\n");
    }
    else{
        int pos;
        printf("Enter Position:");
        scanf("%d",&pos);
        if(pos==1){
            struct Node*newNode=createNode();
            newNode->next=head;
            head=newNode;
        }
        else{
            int cnt=1;
            struct Node*temp=head;
            while(temp->next!=NULL){
                if(cnt==pos-1){
                    break;
                }
                else{
                    cnt++;
                    temp=temp->next;
                }
            }
            if(temp->next==NULL){
                printf("Invalid position!!!!!!!!\n");
            }
            else{
                struct Node*newNode=createNode();
                newNode->next=temp->next;
                temp->next=newNode;
            }
        }
    }
}
void deleteNodeAtAnyPos()
{
    int pos;
    printf("enter the position:");
    scanf("%d",&pos);
    if(head==NULL)
        printf("list is empty:");
    else{
        int cnt=1;
        struct Node*temp=head;
        while(temp->next!=NULL){
            if(cnt==pos-1){
                break;
            }
            else{
                cnt++;
                temp=temp->next;
            }
        }
        if(temp->next==NULL)
            printf("Invalid position!!!!!\n");
        else{
            temp->next=temp->next->next;
        }
    }
}
void display(){
    if(head==NULL)
        printf("list is empty!!!!\n");
    else{
        struct Node*temp=head;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void searchNode()
{
    if(head==NULL){
        printf("list is empty!!!!\n");
    }
    else{
        int val;
        printf("enter the searching element:");
        scanf("%d",&val);
        struct Node*temp=head;
        while(temp!=NULL){
            if(temp->data==val)
                break;
            else
                temp=temp->next;
        }
        if(temp==NULL)
            printf("Not found");
        else
            printf("Found!!!!!\n");
    }
}
int main()
{
    while(1){
        int choice;
        printf("1.create list\n");
        printf("2.insert node at any position\n");
        printf("3.delete node \n");
        printf("4.display\n");
        printf("5.searchNode\n");
        printf("6.exit\n");
        printf("enter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            createlist();
            break;
            case 2:
            insertNodeAtAnyPos();
            break;
            case 3:
            deleteNodeAtAnyPos();
            break;
            case 4:
            display();
            break;
            case 5:
            searchNode();
            break;
            case 6:
            exit(0);
            default:
            printf("Invalid choice!!!!!!\n");
        }
        printf("\n");
        system("pause");
        system("cls");
    }
    return 0;
}

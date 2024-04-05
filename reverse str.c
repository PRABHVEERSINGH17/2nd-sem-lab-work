#include<stdio.h>
struct node{
    int data;
    struct Node*next;
};
struct node*reverse (struct Node*head){
    struct node*prev=NULL;
    struct node*current=head;
    while(current!=NULL){
        struct Node*next=current->next;
        current->next=prev;
        prev= current;
        current=next;
    }
    return prev;
}
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node*head=NULL;
void insert(int data){
    struct node*new_node=malloc(sizeof(struct node));
new_node->data=data;
new_node->next=head;
head =new_node;
}
void printf(){
    struct node*current=head;
    while(current !=NULL){
        printf("%d",current->data);
        current=current->next;
    }
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    print();
    return 0;
}
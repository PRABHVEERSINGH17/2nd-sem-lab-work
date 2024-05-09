#include<stdio.h>
#include<stdlib.h>
struct node{//implementation of a node
    int data;
    struct node*left;
    struct node*right;
};
struct node*createnode(){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    printf("enter tree elements ");
    scanf("%d",&temp->data);
    temp->left=temp->right=NULL;

}

int main(){
    struct node*root=createnode();

    return 0;
}
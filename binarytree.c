#include<stdio.h>
#include<stdlib.h>
struct node{// implementation of node
    int data;
    struct node *left;
    struct node *right;
};
struct node*createnode(){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the tree element:");
    scanf("%d",&temp->data);
    temp->left=temp->right=NULL;
    return temp;
}
void insertnodeinleft(struct node *parent){
    parent->left=createnode();
}
void insertnodeinright(struct node *parent){
    parent->right=createnode();
}
struct node*preorder(struct node *root){
    if(root!=NULL){
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
struct node*inorder(struct node *root){
    if(root!=NULL){
         printf("%d",root->data);
            inorder(root->left);
            inorder(root->right);
        }
}
struct node*postorder(struct node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
    }
}
struct node* search(struct node* root,int value){
    static int flag=0;
if(root!=NULL){
    if(root->data==value)
  flag=1;
    else{
        search(root->left,value);
        search(root->right,value);
    }
}
return flag;
}
int main(){
        struct node *root=createnode();
        insertnodeinright(root);
        insertnodeinleft(root->right);
        insertnodeinleft(root);
        insertnodeinright(root->right->left);
        insertnodeinright(root->left);
        printf("\n Pre-order travesal:\n");
        preorder(root);
        printf("In order travesal\n:");
        postorder(root);
        inorder(root);
        printf("In order travesal\n");
        int val;
        printf("Enter searching element:");
        scanf("%d",&val);
        if(search(root,val)==1)
        printf("Not found");
        return 0;
    }

#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node* left;
    struct node* right;
    int data;
};
struct node* createnode(){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the tree element");
    scanf("%d",&temp->data);
    temp->left=temp->right=NULL;
    return temp;
}
struct node* insert(struct node *root,int value){
    if(root==NULL)
    return createnode();
    else if(value<root->data)
    root->left=insert(root->left,value);
    else
    root->right=insert(root->right,value);
    return root;
}
struct node* preorder(struct node*root){
    if(root!=NULL){
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
    }
    struct node* postorder(struct node *root){
        if(root!=NULL){
            printf("%d",root->data);
            postorder(root->left);
            postorder(root->right);
        }
    }
        struct node* inorder(struct node *root){
            if(root!=NULL){
                inorder(root->left);
                inorder(root->right);
                printf("%d",&root->data);
            }
        }
    int search(struct node *root,int value){
        static int flag=0;
        if(root!=NULL){
            if(root->data=value)
            flag=1;
            else{
                search(root->left,value);
                search(root->right,value);
            }
        }
        return flag;
    }
    
int main(){
    struct node*root=NULL;
    while(1){
        int choice,key;
        printf("************BINARY SEARCH TREE********************");
        printf("1.Insert node in binary search tree");
        printf("2.Preorder travesal");
        printf("3.Postorder travesal");
        printf("4.Inorder Travesal");
        printf("search element in binary search tree");
        printf("Delete element from binary search tree");
        printf("exit\n");
        printf("enter choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            root=insert(root,key);
            printf("Enter key");
            scanf("%d",&key);
            break;
            case 2:
            preorder(root);
            break;
            case 3:
            postorder(root);
            break;
            case 4:
            inorder(root);
            break;
            case 5:
           printf("enter the searching element");
           scanf("%d",&key);
           if(search(root,key)==1)
           printf("Found !!!!");
           else
           printf("Not found !!!!");
           break;
        }
    }
}

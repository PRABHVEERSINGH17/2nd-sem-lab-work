// adt code 117 roll no a4
#include<stdio.h>
#include<stdlib.h>
#define maxsize 1000
int list[1000],size;
void create(int list[])
{
    printf("enter list size:");
    scanf("%d",&size);
    if(size>maxsize)
    {
    printf("List can not be exceded !!!!!!!");
    size=0;
    }
    else
    {
        printf("Enter Elements:\n");
        for( int i=0;i<size;i++)
        {
        scanf("%d",&list[i]);
        }
        printf("list created sucessfully!!!\n");
    }
}
    void Display(int list[])
{
    if(size==0)
    printf("List is Empty !!!\n");
    else 
    {
        printf("List Elements are :\n");
        for(int i=0;i<size;i++)
        printf("%d\t",list[i]);
    }
}
void insert()
{ if(size==0)
{
    printf("list is empty!!\n");
}
else{
    int pos,value;
    printf("enter position");
    scanf("%d",&pos);
    printf("enter the value");
    scanf("%d",&value);
    if(pos>size)
    {
        printf("invalid position !!!!\n");
    }
    else
    {
        for(int i=size;i>=pos;i--)
        {
            list[i]=list[i-1];}
            list[pos-1]=value;
            size++;
            printf("element inserted sucessfully !!!!\n");
        
    }
}
}
void delete()
{
    if(size==0)
    printf("list is empty\n");
    else{
        int pos;
        printf("enter position :");
        scanf("%d",&pos);
        if(pos >0 && pos<=size){
             for(int i=pos-1;i<size;i++)
            {
            list[i]=list[i+1];
            }

        }
       
        size--;
        printf("element is deleted sucessfully");
    }
}
void search(){
    if(size==0){
        printf("list is empty!!!\n");
    }
    else{
        int val,i;
        printf("enter the value to search : ");
        scanf("%d",&val);
        for(i=0; i<size; i++){
            if(list[i]==val){
                break;
            }
        }
        if(i==size)
        {
            printf("element not found !!!\n");
        }
        else
        {
            printf("element found !!!\n");
        }
    }
}
int main()
{
  while (1)
   {
       printf("1. create list\n");
       printf("2. insert the element in list\n");
       printf("3. display list\n");
       printf("4. delete element from a list\n");
       printf("5. search element in list\n");
       printf("6. Exit\n");
      int choice;
      printf("\n\n enter choice:");
      scanf("%d",&choice);
       switch(choice)
       {
          case 1:
               create(list);
            break;
         case 2:
             insert();
            break;
         case 3:
            Display(list);
           break;
         case 4:
              delete ();
          break;
         case 5:
             search();
          break;
         case 6:
             exit (0);
          break;
    
          printf("inva;lid choice!!!!!\n");
        }  
        printf("\n\n");
        system("cls");
        system("pause");
        
    }
}

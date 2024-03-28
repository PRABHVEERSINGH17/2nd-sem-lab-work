#include<stdio.h>
#include<stdlib.h>
#define size 10,       top=1
int isempty()

void push()
    {
        if(isfull())
        {
        printf("stack overflow !!!");
        }
        else
        {
             top++;
            int val;
            printf("enter value:");
            scanf("%d",&val);

            printf("element added !!!!");

        }
    }

int main()
{
    while(1)
    {
         system("cls");
        printf("1. push\n");
       printf("2. pop\n");
       printf("3.peek\n");
       printf("4. show\n");
       printf("5. exit\n");
       int choice;
      printf(" enter choice:");
      scanf("%d",&choice);
       switch(choice)
       {
          case 1:
               push();
            break;
         case 2:
             pop();
            break;
         case 3:
            peek();
           break;
         case 4:
              show();
          break;
         case 5:
             exit();
          break;
          printf("invalid choice!!!!!\n");
          break;
        }  
        printf("\n\n");
        system("pause");
        
    }
    return 0;
}

    
  `
//wap to perform the swapping of two number using pointers.
#include<stdio.h>
int main()
{
int c,b,m;
int *p1=&c,*p2=&b;
printf("enter the variables:");
scanf("%d%d",&c,&b);
printf("before swapping c=%d and b=%d\n",c,b);
m=*p1;
*p1=*p2;
*p2=m;
printf("after swapping c=%d and b=% d,c,b");
return 0;
 

}
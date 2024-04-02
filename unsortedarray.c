#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[6]={8,7,2,5,3,1};
  int sum=10;
   for(int i=0;i<6;i++)
   for(int j=0;j<6;j++)
   if(a[i]+a[j]==10)
   printf("pair found %d %d",a[i],a[j]);

}
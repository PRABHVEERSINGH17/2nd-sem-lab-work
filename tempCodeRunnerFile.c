#include<stdio.h>
int main(){
    int hours,minutes,seconds,milliseconds;
    printf("enter the milliseconds");
    scanf("%d",&milliseconds);
    seconds=milliseconds/1000;
    minutes=milliseconds/60000;
    hours=milliseconds/360000;
    printf("\n seconds=%d minutes=%d hours=%d milliseconds=%d\n",seconds,minutes,seconds);
}
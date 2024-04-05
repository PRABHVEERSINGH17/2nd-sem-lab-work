#include<stdio.h>
void sort(int arr[],int size){
    int i,j,temp;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}int main(){
    int arr[]={5,2,8,7,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
    }
 //searching an element form sorted data//
 #include<stdio.h>
 int main(){
int size,i,flag=0,search,mid,end;
printf("enter the size of an array:");
scanf("%d",&size);
int arr[size];
printf("Enter array elements");
for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
int start=0;end=size-1,mid,search;
printf("enter the elements to search\n");
scanf("%d",&search);
while(start<=end){
    mid=(start+end)/2;
    if(arr[mid]==search){
        flag=1;
        break;
    }
    else if(search<arr[mid]){
        end=mid-1;
    }
    else
        start=mid-1;
    }
    if(flag==1)
    printf("found!!!\n");
    else
    printf("Not found!!!\n");
}
                                                                                                      
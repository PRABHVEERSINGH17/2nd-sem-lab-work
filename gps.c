#include<stdio.h>
#include<stdlib.h>
void createGraph(int n,int graph[n][n]){
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            graph[i][j]=0;
        }
    }
}
void addEdge(int sou,int des,int n,int graph[n][n]){
    graph[sou][des]=1;
}
void display(int n,int graph[n][n]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",graph[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("enter the total number of vertex");
    scanf("%d",&n);
    int graph[n][n];
    createGraph(n,graph);
    addEdge(0,2,n,graph);
    addEdge(0,4,n,graph);
    addEdge(1,2,n,graph);
    addEdge(1,4,n,graph);
    addEdge(2,1,n,graph);
    addEdge(2,4,n,graph);
    addEdge(3,4,n,graph);
    addEdge(4,2,n,graph);
    addEdge(4,3,n,graph);
    addEdge(4,1,n,graph);
    addEdge(4,0,n,graph);
    display(n,graph);
    return 0;
}
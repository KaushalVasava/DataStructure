#include <stdio.h>0
#define MAX 3
void depth_first_search(int adj[MAX][MAX],int visited[MAX],int start)//adj[][max] na lakhe to chale & visited[] to pan chale
{
  int stack[MAX];
  int top=-1,i;
  printf("%c->",'A');
  visited[start]=1;
  stack[++top]=start;
  while(top!=-1)
  {
   start=stack[top];
   for(i=1;i<MAX;i++)
   {
     if(adj[start][i] && visited[i] == 0)
     {
       stack[++top]=i;
       printf("%c->",i+'A');
       visited[i]=1;
       break;
     }
   }  
   if(i==MAX)
    top--;
  }  
}
int main()
{
   int adj[MAX][MAX];
   int visited[MAX]={0},i,j;
   printf("\nEnter the adjacency matrix:\n");
   for(i=0;i<MAX;i++)
     for(j=0;j<MAX;j++)
       scanf(" %d",&adj[i][j]);
	printf("DFS Traversal: ");
    depth_first_search(adj,visited,0);
    printf("\n");
    return 0;
}

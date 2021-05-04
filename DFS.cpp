#include<iostream>
using namespace std;
int main(){
	int m,n,i,k,j,top=0,adj[10][10],visited[10],v,visit[10],stk[10];
	cout<<"\nEnter no. of vertices:";
	cin>>n;
	cout<<"\nEnter no. of Edges:";
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>k>>j;
		adj[k][j]=1;
	}
	cout<<"\nEnter Inital Vertice:";
	cin>>v;
	cout<<"DFS Order:";
	cout<<v<<" ";
	visited[v]=1;
	k=1;
	while(k<n)
	{
		for(j=n;j>=1;j--)
		{
			if(adj[v][j]!=0 && visited[j]!=1)
			{
				visit[j]=j;
				stk[top]=j;
				top++;
				v=stk[--top];
				cout<<v<<" ";
				k++;
				visit[v]=0;
				visited[v]=j;
			}
		}
	}
}

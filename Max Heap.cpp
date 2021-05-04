#include<iostream>
using namespace std;
int a[10],b[10];
void insert()
{
	int i,n;
	cout<<"\nEnter numbers you want to insert:";
	cin>>n;
	for(i=0;i<n;i++)
	{
	 cout<<"\nEnter number:";
	 cin>>a[i];
    }
    for(i=0;i<n;i++)
	 cout<<a[i]<<"\t";  
}
void bulid(int a[],int n)
{
	int j;
	while(j!=n/2)
	{
		if(a[(j-1)/2]<data)
		{
			a[j]=a[(j-1)/2];
		    j=(j-1)/2;
		}
		else
		{
			a[j]=data;
			j++;
		}
	}
}
int main(){
	insert();
}

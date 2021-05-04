#include<iostream>
using namespace std;
#define MAX 10
int total;
int arr[MAX];

void adjust()
{
    int i,temp,k;   
	k=total;
    i=(k-1)/2;
    while(arr[k]<arr[i])
    {
        temp=arr[k];
        arr[k]=arr[i];
        arr[i]=temp;
        k=i;
        i=(k-1)/2;
    }
}
int min_child(int i)
{
    int left,right;
    left=2*i+1;
    right=2*i+2;
    if(arr[left]<arr[right])
        return left;
    else    
        return right;
}
void Delete()
{
    int i,temp,n,k;
    n=arr[0];
    arr[0]=arr[--total];
    i=0;
	k=min_child(i);
    while(arr[i]>arr[k])
    {
    	k=min_child(i);
        temp=arr[k];
        arr[k]=arr[i];
        arr[i]=temp;
        i=k;
        
    }
    cout<<"\ndelete data is "<<n;
}
int min()
{
	return arr[0];
}
void Insert(int n)
{
    arr[total]=n;
    adjust();
    total++;
}
void heap_sort(int a[],int n)
{   int i,b[10];
	for(i=0;i<7;i++)
	 Insert(a[i]); // insert numbers
	for(i=0;i<7;i++)    // find max child step by step
	{
		 Delete();
	     b[i]=min();
    }
    for(i=0;i<7;i++)
	 cout<<b[i]<<"\t";
}
int main()
{
	int i,ch,a[]={40,32,104,16,50,71,25};
    
	cout<<"\nHeap sort is :";
	heap_sort(a,7); 
    
	return 0; 	
}

    

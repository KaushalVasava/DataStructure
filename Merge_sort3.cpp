#include<iostream>
using namespace std;

void Merge(int l[],int r[],int a[])
{
	int nl,nr,i=0,j=0,k=0;
	nl=sizeof(l);
	nr=sizeof(r);
	
	while(i<nl && j<nr)
	{
		if(l[i]<=r[i])
		{
			a[k]=l[i];
			i++;
		}
		else
		{
			a[k]=r[i];
			j++;
		}
		k++;
	}
	while(i<nl)
	{
		a[k]=l[i];
		i++;
		k++;
	}
	while(j<nr)
	{
		a[k]=r[i];
		j++;
		k++;
	}
	
}

void Merge_sort(int a[])
{
   int i,n,*left,*right,mid;
   
   if(n<2)
    return;
   mid=n/2;
   left=new int[mid];
   right=new int[n-mid];
   
   for(i=0;i<=mid-1;i++)
    left[i]=a[i];
   for(i=mid;i<=n-1;i++)
    right[i-mid]=a[i];
	
   Merge_sort(left);
   Merge_sort(right);
   Merge(left,right,a);				 
}

int main()
{
	int *a,n;
	
	cout<<"\nEnter size of array:";
	cin>>n;
	a=new int[n];
	
	cout<<"\nEnter elements of array:";
	for(int i=0;i<n;i++)
	  cin>>a[i];
	  
	Merge_sort(a);  
	for(int i=0;i<n;i++)
   cout<<a[i]<<"\t";
	return 0;
}

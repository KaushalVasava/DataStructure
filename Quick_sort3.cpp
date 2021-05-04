#include<iostream>
using namespace std;

int partition(int a[],int l,int u)
{
	int loc,left=l,right=u,temp;
	loc=l;
	while(l<u)
	{
		while(a[loc]<a[u])
		{
		  u--;
		}
		if(a[loc]>a[u])
		{
			temp=a[loc];
			a[loc]=a[u];
			a[u]=temp;
			loc=u;
		}
		while(a[loc]>a[l])
		{
			l++;
		}
		if(a[loc]<a[l])
		{
			temp=a[loc];
			a[loc]=a[l];
			a[l]=temp;
			loc=l;
		}
	}
	return loc;
}

void Quick_sort(int a[],int beg,int end)
{
	int loc;
	if(beg<end)
	{
		loc=partition(a,beg,end);
		Quick_sort(a,beg,loc-1);
		Quick_sort(a,loc+1,end);
	}
}
int main()
{
	int a[]={12,67,45,33,200,3,54,90};
    Quick_sort(a,0,7);
    cout<<"\nSorting:";
    for(int i=0;i<=7;i++)
      cout<<a[i]<<"\t";
    return 0;
}

#include<iostream>
using namespace std;

int partition(int a[],int l,int u)
{
	int v,i,j,temp;
	v=a[l];
	i=l;
	j=u;
	do{
		do{
			i++;
		}while(a[i]<v && i<=u);
		do{
		   j--;
		}while(v<a[j]);
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}   
	}while(i<j);
	a[l]=a[j];
	a[j]=v;
	return j;
}
void Quick_sort(int a[],int l,int u)
{
	int j;
	if(l<u)
	{
		j=partition(a,l,u);
		Quick_sort(a,l,j-1);
		Quick_sort(a,j+1,u);
	}
}

int main()
{
	int a[]={11,34,21,56,74,2,89,45,100};
    int i;
    Quick_sort(a,0,8);
    cout<<"\nSorting:";
    for(i=0;i<9;i++)
      cout<<a[i]<<"\t";
    return 0;  
}

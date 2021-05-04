#include<iostream>
#include<sys/time.h>
using namespace std;

void merge(int a[],int beg,int mid,int end)
{
	int i,j,index=beg,temp[10],k;
	i=beg;
	j=mid+1;
	while(i<=mid && j<=end)
	{
	  if(a[i]<a[j]) 
	  {
	  	 temp[index]=a[i];
	  	 i++;
	  }	
	  else
	  {
	  	temp[index]=a[j];
	  	j++;
	  }
	  index++;
	}
	if(i>mid)
	{
		while(j<=end)
		{
			temp[index]=a[j];
			j++;
			index++;
		}
	}
	else
	{
		while(i<=mid)
		{
			temp[index]=a[i];
			i++;
			index++;
		}
	}
 	for(k=beg;k<index;k++)
      a[k]=temp[k];
}
void merge_sort(int a[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		merge_sort(a,beg,mid);
		merge_sort(a,mid+1,end);
		merge(a,beg,mid,end);
	}
}


int main()
{
   system("color F0");
   struct timeval tv1;
   struct timezone tz1;	
   int a[100],n,i;
   cout<<"\nEnter size of array:";
   cin>>n;
   cout<<"\nEnter elements of array:";
   for(i=1;i<=n;i++)
     cin>>a[i];
   gettimeofday(&tv1,&tz1);
   cout<<"\nSec:"<<tv1.tv_sec<<" Microsec:"<<tv1.tv_usec<<endl;  
   
   merge_sort(a,1,n);
   for(i=1;i<=n;i++)
     cout<<a[i]<<" ";
   gettimeofday(&tv1,&tz1);
   cout<<"\nSec:"<<tv1.tv_sec<<" Microsec:"<<tv1.tv_usec<<endl;  
   
   return 0;	
}

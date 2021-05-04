#include<iostream>
using namespace std;

int max(int a[],int n){
	int m=a[0],i;
	for(i=0;i<n;i++)
	{
		if(m<a[i])
          m=a[i];
	}
	return m;
}

void Radix_sort(int a[],int n){
	int b1[10][10],b2[10];
	int i,j,k,rem,nop=0,div=1,large,pass;
	//nop=number of position
	large=max(a,n);
	cout<<"\nThe largest element is "<<large<<endl;
	while(large>0)
	{
		nop++;
		large=large/10;
	}
    for(pass=0;pass<nop;pass++)
    {
    	for(i=0;i<10;i++)
    	{
    		b2[i]=0;
		}
		for(i=0;i<n;i++)
		{
			rem=(a[i]/div)%10;
			b1[rem][b2[rem]]=a[i];
			b2[rem]=b2[rem]+1;
		}	
		i=0;
		for(k=0;k<10;k++)
		{
			for(j=0;j<b2[k];j++)
			{
				a[i]=b1[k][j];
				i++;
			}
		}
		div=div*10;
		for(i=0;i<n;i++)
		 cout<<a[i]<<" ";
		cout<<endl; 
	}
}

int main(){
	int i,n,a[100];
	cout<<"\nEnter array size:";
	cin>>n;
	cout<<"\nEnter element of array:";
	for(i=0;i<n;i++)
	 cin>>a[i];
	
	Radix_sort(a,n);
	
	cout<<"\nSorted Element :";
	for(i=0;i<n;i++)
	  cout<<a[i]<<"\t";
	return 0;
}

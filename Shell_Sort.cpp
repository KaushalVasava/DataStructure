#include<iostream>
using namespace std;
main()
{
	int a[20],i,j,gap,n,temp,flag=1;
	cout<<"Enter the Number of elements in the array:";
	cin>>n;
	cout<<"\nEnter Numbers:";
	for(i=0;i<n;i++)
	 cin>>a[i];
	gap=n;
	while(gap>1 || flag==1)
	{
        gap=(gap+1)/2;
		for(i=0;i<(n-gap);i++)
		{
			if(a[i]>a[i+gap])
			{
				temp=a[i];
				a[i]=a[i+gap];
	       		a[i+gap]=temp;
		        flag=0;
			}
	    }
	}
	cout<<"\nSorted Array :";
	for(i=0;i<n;i++)
	  cout<<a[i]<<"\t";
}

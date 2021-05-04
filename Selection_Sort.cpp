// Selection Sort

#include<iostream>
using namespace std;

int min(int A[],int k,int N){
	int j,LOC,MIN;
	MIN=A[k];
	LOC=k;
	for(j=k+1;j<=N-1;j++)
	{
		if(MIN>A[j])
		{
			MIN=A[j];
			LOC=j;
		}
	}
	return LOC;
}

int  main(){
	int A[]={11,43,23,10,40,53,23,95,36,89};
	int k,LOC,temp;
	for(k=0;k<=8;k++)  // for(k=0;k<=N-2;k++)
	{
		LOC=min(A,k,10);
		temp=A[k];
		A[k]=A[LOC];
		A[LOC]=temp;
	}
	cout<<"Sorting :";
	for(k=0;k<=9;k++)
	  cout<<" "<<A[k];
	return 0;  
}

// Insertion Sort

#include<iostream>
using namespace std;

void Insertion_Sort(int A[],int N){
	int j,i,temp;
	  /*i=1;
	  while(i<N)
	  {	
	    temp=A[i];
	    j=i-1;
	    while(j>=0 && temp<A[j])
	    {
	       A[j+1]=A[j];
	       j--;
	    }
	    A[j+1]=temp;
	    i++;
      }*/
      
	for(i=1;i<N;i++) 
	{
		temp=A[i];
		for(j=i-1;j>=0 && temp<A[j];j--)
		{
			A[j+1]=A[j];
		}
		A[j+1]=temp;
	}
}

int main(){
	int A[]={100,40,90,30,20,10};
	Insertion_Sort(A,6);
	int i;
	cout<<"Sorting :";
	for(i=0;i<6;i++)
	  cout<<A[i]<<" ";
	return 0;  
}

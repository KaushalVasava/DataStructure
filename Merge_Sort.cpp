// Merge Sorting

#include<iostream>
using namespace std;
void merge(int[],int,int,int[],int,int,int[],int);
void mergepass(int A[],int N,int L,int B[])
{
  	int j,LB;
  	int Q,S,R;
  	Q=N/(2*L); // Q is total pair of arrays to be merged
  	S=2*L*Q;   // S is total no. of Elements, in all pair of 
  	R=N-S;     //R is Residual Elements

    for(j=0;j<Q;j++){
    	LB=2*j*L; // Lower Bound (index) of the first array in 
    	merge(A,L,LB,A,L,LB+L,B,LB); //Merging two arrays and 
    }
    if(R<=L)  // If only one sub array left
	{
    	for(j=0;j<R;j++)
    	 B[S+j]=A[S+j]; //copy last array to B
	}
    else   //if last pair of arrays are of unequal size
	{
		merge(A,L,S,A,R-L,S+L,B,S);
	}
}

void merge(int A[],int n1,int index1,int B[],int n2,int index2,int C[],int index)
{
	while(n1!=0 && n2!=0){
		if(A[index1]<B[index2]){
			C[index]=A[index1];
			index++;
			index1++;
			n1--;
		}
		else{
			C[index]=B[index2];
			index++;
			index2++;
			n2--;
		}
	} //end of while
	while(n1!=0){
		C[index]=A[index1];
		index++;
		index1++;
		n1--;
	}
	while(n2!=0){
		C[index]=B[index2];
		index++;
		index2++;
		n2--;
	}
}

void Merge_Sort(int A[],int N){
	int L=1,B[11];
	while(L<N){
		mergepass(A,N,L,B);
		mergepass(B,N,2*L,A);
		L=4*L;
	}
}

int main(){
	int i,A[]={11,44,33,24,77,66,89,55,2,100};
	cout<<"Before Sorting:";
	for(i=0;i<10;i++)
	  cout<<A[i]<<"\t";  
	Merge_Sort(A,10);
	cout<<endl<<"After Sorting :";
	for(i=0;i<10;i++) 
	cout<<A[i]<<"\t";
	return 0;  
}

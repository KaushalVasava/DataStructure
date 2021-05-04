// Modified Bubble Sort Program

#include<iostream>
using namespace std;

void M_Bubble_Sort(int A[],int N){
	int round,i,temp,flag;
	for(round=1;round<=N-1;round++){
		flag=0;
		for(i=0;i<=N-1-round;i++){
			if(A[i]>A[i+1])  //Sorting in increasing Order.
			{
				flag=1;
				temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
			}
		}
		if(flag==0){
	      cout<<"Round="<<round<<endl;
		  return;
	    }
    }
}

int main(){
	int A[]={3,23,13,45,54,36,10};
	int i;
	M_Bubble_Sort(A,7); 
	for(i=0;i<7;i++)
	  cout<<" "<<A[i];
	return 0;
}

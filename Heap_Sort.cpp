#include<iostream>
using namespace std;

// A function to hapify the array
void MaxHepify(int A[],int i,int N){
	int j,temp;
	temp=A[i];
	j=2*i;
	
	while(j<=N){
		if(j<N && A[j+1]>A[j])
		  j=j+1;
		//break if parent value already greater than child value
		if(temp>A[j])
		break;
		//Switching value with the parent node if temp<A[j].
		
		else if(temp<=A[j]){
			A[j/2]=A[j];
			j=2*j;
		}
	}
	A[j/2]=temp;
	return;
}
void Heap_Sort(int A[],int N){
	int i,temp;
	for(i=N;i>=2;i--){
		temp=A[i];
		A[i]=A[1];
		A[1]=temp;
		//Biulding max heap of remaining element
		MaxHepify(A,1,i-1);
	}
}

void Build_MaxHeap(int A[],int N){
	int i;
	for(i=N/2;i>=1;i--)
	 MaxHepify(A,i,N);
}

int main(){
	
	int i;
	/*cout<<"Enter the number of data element to be sorted : ";
	cin>>n;
	n++;*/
    int A[]={40,32,104,16,50,71,25};
   /* for(i=1;i<n;i++){
    	cout<<"Enter Element "<<i<<" ";
    	cin>>A[i];
	}*/
	Build_MaxHeap(A,7);
	Heap_Sort(A,7);
	
	//printing sorted data.
	
	cout<<"\nSorted data: ";
	for(i=0;i<=7;i++)
	 cout<<A[i]<<" ";
	 return 0;
}

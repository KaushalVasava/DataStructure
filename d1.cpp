#include<iostream>
using namespace std;
main(){
	int LA[]={1,3,5,7,8};
	int item =10,k=3,n=5;
	int i=0,j=n;
	
	cout<<"The original array elements are :\n";
	
	for(i=0;i<n;i++){
		cout<<"LA["<<i<<"]"<<"="<<LA[i]<<endl;
	}
	n=n+1;
	while(j>=k){
		LA[j+1]=LA[j];
		j=j-1;
	}
	LA[k]=item;
	cout<<endl;
	cout<<"The array elements after insertion :\n";
	for(i=0;i<n;i++)
	  cout<<"LA["<<i<<"]"<<"="<<LA[i]<<endl;;
	  
}

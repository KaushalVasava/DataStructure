// Linear Search

#include<iostream>
using namespace std;

void Linear_search(int L[],int N,int item){
    int flag=1,k;
    for(k=0;k<N;k++)
    {
    	if(L[k]==item){
    		flag=0;
    		cout<<"Search Successful at position "<<k+1;
		}
	}
	if(flag==1)
		cout<<"Search Unsuccessful";
}
main(){
	int A[]={11,23,32,1,24,65,76,22,90,34,50};
	Linear_search(A,11,50);
    return 0;
}

// Linear Search 

#include<stdio.h>

void Seq_search(int L[],int N,int item){
	int flag=1,k;
	for(k=0;k<=N-1;k++){
		if(L[k]==item){
			flag=0;
			printf("Search successful");
		}
	}
	if(flag==1){
		printf("Search Unsuccessful");
	}
}
void main(){
	int A[]={22,33,44,55,66,77,88,99,100};
	Seq_search(A,8,77);   // A=array. 8=Index ,which is search for 1 to 8 in array . 77=Element in Array.
}

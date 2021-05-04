// Qiuck Sorting

#include<iostream>
using namespace std;

void quick(int A[],int N,int beg,int end,int *Locptr)
{
	int temp,left,right;
	left=beg;
	right=end;
	*Locptr=beg;
step2:	
	while(A[*Locptr]<=A[right] && *Locptr!=right)
	  right--;
	if(*Locptr==right)
	   return;
	if(A[*Locptr]>A[right]){
		temp=A[*Locptr];
		A[*Locptr]=A[right];
		A[right]=temp;
		*Locptr=right;
	}     
	goto step3;

step3:
	while(A[left]<=A[*Locptr] && left!=*Locptr)
	  left++;
	if(*Locptr==left)
	  return;
	if(A[left]>A[*Locptr]){
		temp=A[left];
		A[left]=A[*Locptr];
		A[*Locptr]=temp;
		*Locptr=left;
	}  
	goto step2;  
}

void Quick_Sort(int A[],int N)
{
	int Loc;
    int beg,end,top=-1;
    int Lower[10];
	int Upper[10];
	if(N>1){
		top++;
		Lower[top]=0;
		Upper[top]=N-1;
	}	
	while(top!=-1){
		beg=Lower[top];
		end=Upper[top];
		top--;
		quick(A,N,beg,end,&Loc);
		if(beg<Loc-1){
			top++;
			Lower[top]=beg;
			Upper[top]=Loc-1;
		}
		if(Loc+1<end){
			top++;
			Lower[top]=Loc+1;
			Upper[top]=end;
	   }
	}
}
int main(){
	int A[]={112,33,45,22,13,90,75,39,29,89};
	int i;
	Quick_Sort(A,10);
	cout<<"Sorting :";
	for(i=0;i<9;i++){
		cout<<A[i]<<" ";
	}
	return 0;	
}


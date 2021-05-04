#include<iostream>
using namespace std;
int a[100];
int total=0;
int j,n;

void heapify(){
	int i,k,temp=0;
	k=total;
	i=(k-1)/2;
	while(a[k]>a[i]){
		temp=a[k];
		a[k]=a[i];
		a[i]=temp;
		k=i;
		i=(k-1)/2;
	}
}
void Display(){
	for(j=0;j<total;j++)
	 cout<<a[j]<<" ";
}
void insert(int val){
   a[total]=val;
   heapify();
   total++;
}
int max_child(int i){
	if(a[2*i+1]>a[2*i+2])
	 return (2*i+1);
	else
	 return (2*i+2); 
}
int Delete(){
    int temp,t,i,k;
    t=a[0];
	a[0]=a[total];
	total--;
	i=0;
	k=max_child(i);
    while(a[k]>a[i])
    {
    	temp=a[k];
    	a[k]=a[i];
    	a[i]=temp;
    	i=k;
    	k=max_child(i);
	}
	return t;
}
int main(){
	int ch,val;
	a[n];
	while(1){
	cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit";
	cout<<"\nEnter your choice:";
	cin>>ch;
	switch(ch){
		case 1:cout<<"\nEnter element:";
		       cin>>val;
		       insert(val);
		       Display();
               break;
        case 2:val=Delete();
               cout<<"\nDeleted value is "<<val<<endl;
               Display();
		       break;
		case 3:Display();
		       break;       
		case 4:exit(0);	          
	}
  }	
  return 0;
}

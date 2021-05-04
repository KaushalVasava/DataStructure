#include<iostream>
using namespace std;

int a[10];

void insert(int val,int pos)
{
	int i,temp,par;
	
	a[i]=val;
	while(pos>1)
	{
		par=pos/2;
		if(a[pos]<=a[par])
		 return ;
		else
		{
		   temp=a[pos];
		   a[pos]=a[par];
		   a[par]=temp;
		   pos=par;
		 } 
	}
	i++;
}
void del(){
	int i,last,temp;
	int ptr=1,left=2,right=3;
	last=a[i];
	i=i-1;
	a[ptr]=last;
	
	while(left<=i)
	{
		if(a[ptr]>=a[left] && a[ptr]>=a[right])
			return ;
		if(a[right]<=a[left]){
			temp=a[ptr];
			a[ptr]=a[left];
			a[left]=temp;
			ptr=left;
		}	
		else
		{
			temp=a[ptr];
			a[ptr]=a[right];
			a[right]=temp;
			ptr=right;
		}
		left=2*ptr;
		right=2*ptr+1;
	}
}
int main(){
	int i,n,ch;
	while(1){
       cout<<"\n1.Insert data in Heap";
       cout<<"\n2.Delete data in Heap";
       cout<<"\n3.Exit";
       cout<<"\nEnter your choice:";
       cin>>ch;
       switch(ch){
	    case 1:
		  cout<<"\nEnter no. of data:";
	      cin>>n;
	      for(i=1;i<=n;i++)
 	      { 
		    cout<<"\nEnter data :";
		    cin>>a[i];
		    insert(a[i],i);
	      }
	      for(i=1;i<=n;i++)
	      cout<<a[i]<<"\t";
          break;	
	    case 2:del();
          for(i=1;i<=n;i++)
		   cout<<a[i]<<"\t";
		  break;
		case 3:exit(0);   	
      }
   }
   return 0;
}

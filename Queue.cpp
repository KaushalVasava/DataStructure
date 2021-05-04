
#include<iostream>
using namespace std;
#define max 10
int front=-1,rear=-1;
int q[max];
void insert(int val)
{
	if(rear==max-1)
	{
		cout<<"\nOverflow";
	}
	else{	
	  rear++;
	  q[rear]=val;
	}
}
int Delete()
{ 
    int val;
	if(rear==-1)
	{
		cout<<"Underflow";
	}
	else{
		front++;
		val=q[front];
	}
	return val;
}
void display()
{
	int i;
	if(front==rear || front>rear)
	{
		cout<<"\nQueue is Empty";
	}
	else
	{
	   for(i=front+1;i<=rear;i++)
	     cout<<q[i]<<" ";	
	}
}

int main()
{
	int ch,val;
	while(1)
	{
	  cout<<"\n1. Insert";
	  cout<<"\n2. Delete";
	  cout<<"\n3. Display";
	  cout<<"\n4. exit";
	  cout<<"\nEnter your choice:";
	  cin>>ch;
	  switch(ch){
	  	case 1:cout<<"\nEnter data :";
	  	       cin>>val;
	  	       insert(val);
	  	       break;
	  	case 2:val=Delete();
		       if(val!=0)
			    cout<<"\nDeleted data is "<<val;
			   else
			    cout<<"\nUnderflow";
			   break;
		case 3:display();
		       break;
		case 4:exit(0);	   	          
	  }	
	}
	return 0;
}

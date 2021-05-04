#include<iostream>
using namespace std;

int s1[10];
int s2[10];
int top1=-1;
int top2=-1;

int isEmpty1()
{
	if(top1==-1)
	 return 1;
	else
	 return 0; 
}
int isEmpty2()
{
	if(top2==-1)
	 return 1;
	else
	 return 0; 
}
void push1(int s1[],int x)
{
	//int top=-1;
	if(top1>10)
	 cout<<"\nOverflow";
	else
	{
		top1++;
		s1[top1]=x;
	} 
}
void push2(int s2[],int y)
{
	//int top=-1;
	if(top2>10)
	 cout<<"\nOverflow";
	else
	{
		top2++;
		s1[top2]=y;
	} 
}

void insert()
{
	int val;
	cout<<"\nEnter the value to insert in queue: ";
	cin>>val;
	push1(s1,val); 
}

int pop1(int s1[])
{
	//int top=-1;
	if(isEmpty1())
	 cout<<"\nUnderflow";
	else
	{
		int val1;
		val1=s1[top1];
		top1--;
		return val1;
	} 
}
int pop2(int s2[])
{
	//int top=-1;
	if(isEmpty2())
	 cout<<"\nUnderflow";
	else
	{
		int val2;
		val2=s2[top2];
		top2--;
		return val2;
	} 
}
void deleteQ()
{
	//int top1=-1,top2=-1;
	int x,val;
	if(isEmpty2()==1)
	{
		if(isEmpty1()==1)
		 cout<<"\nQueue is Empty";
	}
	else
	{
		while(!isEmpty1()!=1)
		{
			x=pop1(s1);
			push2(s2,x);
		}
		val=pop2(s2);
        cout<<"\nDeleted Element is "<<val;
	} 
}

void display()
{
	//int top1=-1,top2=-1;
	int i;
	if(isEmpty2())
	{
		if(isEmpty1())
		 cout<<"\nQueue is Empty";
	}
	else
	{
	  for(i=0;i<=top1;i++)
	   	cout<<s1[i]<<" ";
	} 
}
int main()
{
	int ch;
	while(1)
	{
		cout<<"\n*****MENU*****";
		cout<<"\n\n1.Insert";
		cout<<"\n2.Delete";
		cout<<"\n3.Display";
		cout<<"\n4.Exit";
		cout<<"\nEnter your choice : ";
		cin>>ch;
		switch(ch){
			case 1:insert();
			       break;
			case 2:deleteQ();
			       break;
			case 3:display();
			       break;
			case 4:exit(0);	   	          
		}
	}
}

#include<iostream>
using namespace std;

#define MAX 10
int stack[MAX];
int topA=-1,topB=MAX;
void pushA(int val)
{
	if(topA==topB-1)
	{
		cout<<"\nOverflow.\n";
	}
	else
	{
		topA++;
		stack[topA]=val;
	}
}

int popA()
{
	int val;
	if(topA==-1)
	{
		cout<<"\nUnderflow.\n";
	    val=-1;
	}
	else
	{
		val=stack[topA];
		topA--;
	}
	return val;
}

void displayA()
{
	int i;
	if(topA==-1)
	  cout<<"\nStck is Empty.\n";
	else
	{
	   for(i=topA;i>=0;i--)
	     cout<<stack[i]<<endl;	 	
	}  
}

void pushB(int val)
{
	if(topB-1==topA)
	{
		cout<<"\nOVERFLOW.\n";
	}
	else
	{
		topB++;
		stack[topB]=val;
	}
}

int popB()
{
	int val;
	if(topB==MAX)
	{
		cout<<"\nUNDERFLOW.\n";
		val=-1;
	}
	else
	{
		val=stack[topB];
		topB--;
	}
	return val;
}
void displayB()
{
   int i;
   if(topB==MAX)
     cout<<"\nStack B is Empty";
   else
   {
     for(i=topB;i<MAX;i++)
       cout<<stack[i]<<endl;
   }
}

int main()
{
	int ch,val;
	while(1){
		cout<<"\n\n1.Push in stack A";
		cout<<"\n2.Pop in stack A";
		cout<<"\n3.Display stack A";
		cout<<"\n4.Push in stack B";
		cout<<"\n5.Pop in stack B";
		cout<<"\n6.Display stack B";
		cout<<"\n0.Exit";
		cout<<"\nEnter your choice:";
		cin>>ch;
		switch(ch){
			case 1:cout<<"Enter value to push in stack A:";
			       cin>>val;	
			       pushA(val);
			       break;
			case 2:val=popA();
			       if(val!=-1)
			        cout<<"Popped value is "<<val; 
				   break;
			case 3:displayA();
			       break;
			case 4:cout<<"Enter value to push in stack B:";
			       cin>>val;	
			       pushB(val);
			       break;
			case 5:val=popB();
			       if(val!=-1)
			        cout<<"Popped value is "<<val; 
				   break;
			case 6:displayB();
			       break;       
			case 0:exit(0);	   	         
		}
	}
	return 0;
}

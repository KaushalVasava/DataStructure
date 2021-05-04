#include<iostream>
using namespace std;

class stack{
	public:
		int a[5],top,c;
		stack()
		{
			top=-1;
		}
		void push(int val)
		{
			if(top==5)
			 cout<<"\nstack is full";
			else
			{
				top++;
				a[top]=val;
			 } 
		}
		int pop()
		{
			int val;
			if(top==-1)
			 cout<<"\nStack is Empty.";
			else{
				val=a[top];
				top--;
			} 
			return val;
		}
		void view()
		{
			if(top!=-1)
			{
				for(int i=0;i<top;i++)
				 cout<<a[i]<<" ";
			}
		}
};
class Queue:public stack{
	public:
		int x,y;
		stack s1,s2;
		void insert(int val)
		{
			s1.push(val);
		}
		int Delete()
		{
			while(top!=-1)
			{
				x=s1.pop();
	            s2.push(x);
			}
			y=s2.pop();
			return y;
		}
        void display()
        {
        	if(top==-1)
        	 cout<<"\nQueue is Empty";
        	else
			{
				for(int i=0;i<top;i++)
			      cout<<a[i]<<" ";
			} 
		}
};

int main(){
	Queue q1;
	stack s;
    int n,a,i,ch;

    while(1){
    	cout<<"\n1.Add\n2.Delete\n3.display\n4.Exit";
    	cout<<"\nEnter your choice:";
    	cin>>ch;
    	switch(ch){
    		case 1:cout<<"\nEnter a number:";
    		       cin>>a;
    		       q1.insert(a);
    		       s.view();
    		       break;
    		case 2:a=q1.Delete();
    		       cout<<"\nDeleted value is "<<a;
			       break;
			case 3:q1.display();
			       break;
			case 4:exit(0);	          
		}
	}
	return 0;
}

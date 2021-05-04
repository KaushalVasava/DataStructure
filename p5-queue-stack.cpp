#include<iostream>
using namespace std;

class stack{
	int top; 
   public:
     int a[10];
	 stack()
	 {
	 	top=-1;
	}
	void push(int x)
	{
		if(top>=10)
		{
			cout<<"\nstack overflow";
		}
		else
		{
			a[++top]=x;
		}
	}
	int pop()
	{ int x;
		if(top==-1){
			cout<<"\nstack undeflow";
		}
		else
		{
			x=a[top--];	
		}
		return x;
	}	
    bool is_empty()
    {
    	if(top<0)
    	 return true;
    	else
		 return false; 
	}
};

class queue{
	public:
		stack s1,s2;
		void enqueue(int x)
		{
			s1.push(x);
			
		}
		int dequeue()
		{
			int x,y;
			while(!s1.is_empty())
			{
				x=s1.pop();
				s2.push(x);
			}
			y=s2.pop();
			
			while(!s2.is_empty())
			{
				x=s2.pop();
				s1.push(x);
			}
			return y;
		}
		void display(int n)
		{
            int i,a[n];
            i=0;
			while(!s1.is_empty())
			{
				a[i]=s1.pop(); 
			    i++;
			}
			for(int k=i-1;k>=0;k--)
			  cout<<a[k]<<"\t";
		}
};
int main()
{
	int i,n,ch,a[10];
	queue q;
	cout<<"\nEnter number of element in queue :";
	cin>>n;
	/*while(1){
	 cout<<"\n1.Insert\n2.Delete\n3.display\n4.Exit\nEnter your choice:";
	 cin>>ch;
	 switch(ch)
	 {
       case 1:*/cout<<"\nEnter the number:";
	           for(i=0;i<n;i++)
			   {
			     cin>>a[i];
		         q.enqueue(a[i]);
		        }
		        for(i=0;i<n;i++)
		         cout<<a[i]<<"\t";
	          cout<<"\nhow many element you want to delete:";
	          cin>>n;
	          for(i=0;i<n;i++)
			   cout<<"\nDeleted element is "<<q.dequeue();
			  cout<<endl<<"Element in queue are :";
			  q.display(n);
	return 0;
}

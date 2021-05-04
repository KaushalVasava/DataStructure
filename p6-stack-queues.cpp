#include<iostream>
using namespace std;

class queue{
	int rear,front; 
   public:
     int a[10];
	 stack()
	 {
	 	rear=-1;
		 front=-1;
	 }
	void enque(int x)
	{
		if(rear==10)
		{
			cout<<"\nqueue overflow";
		}
		else
		{
			a[++rear]=x;
			cout<<"\ninserted element is "<<x;
		}
	}
	int deque()
	{ int x;
		if(rear==-1){
			cout<<"\nqueue undeflow";
		}
		else
		{
			x=a[++front];	
			cout<<"\nDeleted element is "<<x;
		}
		return x;
	}	
    bool is_empty()
    {
    	if(rear==-1)
    	 return true;
    	else
		 return false; 
	}
};

class stack{
	public:
		queue q1,q2,temp;
		void push(int x)
		{
			q1.enque(x);
		}
		int pop()
		{
			int x1,x2,y;
			while(!q1.is_empty())
			{
				x1=q1.deque();
				q2.enque(x1);
			}
		    y=x1;
			while(!q2.is_empty())
			{
				x2=q2.deque();
			    q1.enque(x2);
			}
			return y;
		}
		void display(int n)
		{
            int i,a[n];
            i=0;
			while(!q1.is_empty())
			{
				a[i]=q1.deque(); 
			    i++;
			}
			for(int k=i;k>=0;k--)
			  cout<<a[k]<<"\t";
		}
};
int main()
{
	int i,n,ch,a[10];
	stack s;
	//cout<<"\nEnter size of queue :";
	//cin>>n;
	/*while(1){
	 cout<<"\n1.Insert\n2.Delete\n3.display\n4.Exit\nEnter your choice:";
	 cin>>ch;
	 switch(ch)
	 {
       case 1:cout<<"\nEnter the number:";
	           for(i=0;i<n;i++)
			  
			     cin>>a[i];
		         s.push(a[i]);
		        }
		        for(i=0;i<n;i++)
		         cout<<a[i]<<"\t";
	          cout<<"\nhow many element you want to delete:";
	          cin>>n;
	          for(i=0;i<n;i++)
			   cout<<"\nDeleted element is "<<s.pop();
			  cout<<endl<<"Element in stack are :";*/
			  cout<<"hi";
			  s.push(10);
			  s.push(20);
			  s.push(30);
			  cout<<"\nDeleted number is "<<s.pop();
		//	  s.display(n);
	          
	return 0;
}

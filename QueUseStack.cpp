#include<iostream>
using namespace std;

int n1;
class stack{
	  int *a,top;
    public:
	  void create(int n){
	  	 n1=n;
	  	 a=new int[n1];
	  	 top=-1;
	  }	
	  void display(){
	  	int i;
	  	for(i=0;i<top;i++)
	  	 cout<<a[i]<<"\t";
	  }
	  void push(int n)
	  {
	  	if(top+1==n1)
	  	  cout<<"\nQueue is full";
	  	else{
	  		top++;
	  		a[top]=n;
		  }  
	  }
	  int pop()
	  {
	  	int t;
	  	if(top==-1)
	  	  cout<<"\nQueue is Empty";
	  	else{
	  		t=a[top];
	  		top--;
	  		return t;
		  }  
	  }
	  void peek(){
	  	if(top<n1 && top!=-1)
	  	  cout<<a[top];
	  	else
		  cout<<"\nQueue is Empty";  
	  }
};
class Queue: public stack
{
	stack s1,s2;
	int i;
   public:
    void create(int n)
	{
		s1.create(n);
		s2.create(n);
		i=0;
	}
	void add(int n)
	{
		s1.push(n);
		i++;
		s1.display();
	}
	void Delete(){
		for(int j=0;j<i;j++)
		 s2.push(s1.pop());
		s2.pop();
		i--;
		for(int j=0;j<i;j++)
		 s1.push(s2.pop());
		s1.display();  
	}	
};

int main(){
	Queue q1;
	int n,a,i,ch;
	cout<<"\nEnter the capacity of queue:";
	cin>>n;
	q1.create(n);
	while(1){
		cout<<"\n1.Add\n2.Delete\n3.Display\n4.Exit";
		cout<<"\nEnter your choice:";
		cin>>ch;
		switch(ch){
			case 1:cout<<"\nEnter Number:";
			       cin>>n;
			       break;
			case 2:q1.Delete();
			       break;
			case 3:q1.display();       
			case 4:exit(0);	          
		}
	}
}

#include<iostream>
using namespace std;

class Queue{
	  int front,rear,c,i;
	  int a[10];
	public:
	  Queue(){
	  	i=0;
	  }	
	  void create(int n){
	  	 c=n;
	  	 front=-1;
	  	 rear=-1;
	  	 i=0;
	  }
	  void Add(int n){
	  	if(i==c)
		   cout<<"\nQueue is Full";
		else{
			if(front==-1)
			  front++;
			if(rear==c)
			 rear=0;
			rear++; 
			a[rear]=n;
			i++;
			this->display();    
		}   
	  }
	  int Delete(){
	  	if(i==0)
	  	   cout<<"\nQueue is Empty";
        int t;
		t=a[front];
		a[front]=0;
		front++;
		if(front==c)
		  front==0;
		i--;
		this->display();
		return t;  	
	  }
	  void display()
	  {
	  	int t;
	  	t=front;
	  	while(t!=rear)
	    {
	    	cout<<"\t"<<a[i];
	    	t++;
	        if(t==c)
	          t==0;
		}
		cout<<"\t"<<a[t];
	  }
};

int main(){
	Queue q1;
    int n,a,i,ch;
    cout<<"\nEnter capapcity of Queue";
    cin>>n;
    q1.create(n);
    while(1){
    	cout<<"\n1.Add\n2.Delete\n3.Exit";
    	cout<<"\nEnter your choice:";
    	cin>>ch;
    	switch(ch){
    		case 1:cout<<"\nEnter a number:";
    		       cin>>a;
    		       q1.Add(a);
    		       break;
    		case 2:a=q1.Delete();
			       break;
			case 3:exit(0);	          
		}
	}
	return 0;
}

//Stack Implement Using Array

#include<iostream>
using namespace std;

#define MAX 5

int top=-1;
class stack{
	public:
	  int a[MAX];  
	  void push(int);
	  int pop();
	  void view();
};
void stack::push(int x){
	if(top>MAX)
	  cout<"Stack Overflow";
    else
	{
       top++;
       a[top]=x;
       cout<<"Element Inserted";
	}
}
int stack::pop(){
	if(top<0)
	{
	  cout<<"Stack Underflow";
      return 0;
	}
	else
	{
	   int d;
	   d=a[top];
	   top--;
	   return d;
	} 
}
void stack::view(){
	 if(top==-1)
	   cout<<"Stack is Empty!\n";
	 else{
	  for(int i=0;i<=top;i++){
	 	cout<<a[i]<<"\t";
	  }
	  cout<<endl;
	 } 
}

int main(){
	stack obj;
	int ch,item;
	while(1){
   	 cout<<"\n1. Push";
	 cout<<"\n2. Pop";
	 cout<<"\n3. Display";
	 cout<<"\n0. Exit";
	 cout<<"\nEnter your choice:";
	 cin>>ch;
	 switch(ch){
		case 1:
			if(top!=MAX)
			{
			  cout<<"Enter number to push: ";
			  cin>>item;
		      obj.push(item);
		    }
			else
		      cout<<"Can't Push. Stack is Full!\n";
		    break;
		case 2:
		    if(top!=-1)
		      cout<<"Number popped is "<<obj.pop()<<endl;
		    else
		      cout<<"Can't Pop. Stack is Empty!\n";	 	  
	        break;
	    case 3:
	        obj.view();	     
		    break;
		case 0:
		    exit(0);    
 	 }
   } 
}

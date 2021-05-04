#include<iostream>
using namespace std;

struct stack{
	int data;
	stack *next;
};
stack *top=NULL;

stack *push(stack *top)
{
	int val;
	stack *newnode;
	newnode=new stack();
	cout<<"\nEnter the data:";
	cin>>val;
	newnode->data=val;
	if(top==NULL)
	{
		newnode->next=NULL;
		top=newnode;
	}
	else{
		newnode->next=top;
		top=newnode;
	}
	return top;
}
stack *pop(stack *top)
{
    stack *temp;
	if(top==NULL)
	{
		cout<<"\nUnderflow!";
	}
	else
	{
		temp=top;
		top=top->next;
		cout<<"\nPopped data is "<<temp->data;
		delete temp;
	}	
	return top;
}
stack *display(stack *top){
	stack *ptr;
	if(top==NULL)
	{
		cout<<"\nSatck is Empty!";
	}
	else{
		ptr=top;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<"\t";
			ptr=ptr->next;
		}
	}
	return top;
}
stack *peek(stack *top)
{
	if(top==NULL)
	{
		cout<<"\nSatck is Empty!\n";
	}
	else{
	  cout<<"\nPeek data is "<<top->data;
    }
	return(top);
}
int main(){
	int ch;
	while(1){
		cout<<"\n1. Push";
		cout<<"\n2. Pop";
		cout<<"\n3. Display";
		cout<<"\n4. Peek";
		cout<<"\n5. Exit";
		cout<<"\nEnter your choice:";
		cin>>ch;
		switch(ch){
			case 1:top=push(top);
			       break;
			case 2:top=pop(top);
			       break;
			case 3:top=display(top);
			       break;
			case 4:top=peek(top);
			       break;
			case 5:exit(0);
			default:cout<<"\nInvalid choice!";	   	          
		}
	}
	return 0;
}

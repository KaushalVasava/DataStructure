#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	node *next;
};
node *front=NULL,*rear=NULL;

void insert(int val){
	node *newnode;
	newnode=new node();
	newnode->data=val;
	if(front==NULL){
		front=rear=newnode;
		rear->next=NULL;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
		rear->next=NULL;
    }
}
void deleteQ(){
	node *temp;
	if(front==NULL)
		cout<<"\nUnderflow\nDeletion is not possible.";
	else
	{
		temp=front;
		front=front->next;
        cout<<"Deleted value is "<<temp->data;
        delete temp;
    }
}
void view(){
	node *ptr;
	ptr=front;
	if(ptr==NULL)
	  cout<<"\nQueue is Empty.\n";
	else{
		while(ptr!=rear)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
		cout<<ptr->data;
	}  
}

int main(){
	int ch,item;
	while(1){
		cout<<"\n\n***************MENU*************";
		cout<<"\n1.Insert";
		cout<<"\n2.Delete";
		cout<<"\n3.Display";
		cout<<"\n4.Exit";
		cout<<"\nEnter your choice:";
		cin>>ch;
		switch(ch){
			case 1:cout<<"\nEnter value to insert in Queue:";
			       cin>>item;
			      insert(item);
			      break;
			case 2:deleteQ();
			      break;
			case 3:view();
			      break;
			case 4:exit(0);	  	        
		    default:cout<<"\nInvalid choice!\nSelect valid choice.";
		}
	}
}


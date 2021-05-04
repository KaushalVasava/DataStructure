#include<iostream>
using namespace std;

struct node{
  int data;
  int priority;
  node *next;
};
node *start=NULL;
node *insert(node*);
node *Delete(node*);
void display(node*);

int main(){
	int ch;
	while(1)
    {
    	cout<<"\n\n****MENU****";
    	cout<<"\n\n1.Insert";
    	cout<<"\n2.Delete";
    	cout<<"\n3.Display";
    	cout<<"\n4.Exit";
    	cout<<"\nEnter your choice:";
    	cin>>ch;
    	switch(ch){
    		case 1:start=insert(start);
    		       break;
    		case 2:start=Delete(start);
			       break;
			case 3:display(start);
			       break;
			case 4:exit(0);	   	          
		}
	}
}

node *insert(node *start){
	int val,pri;
	node *ptr,*p;
	ptr=new node();
	cout<<"\nEnter the value and priority:";
	cin>>val>>pri;
	ptr->data=val;
	ptr->priority=pri;
	if(start==NULL || pri<start->priority)
	{
		ptr->next=start;
		start=ptr;
	}
	else
	{
		p=start;
		while(p->next!=NULL && p->next->priority<=pri)
		  p=p->next;
		ptr->next=p->next;
		p->next=ptr;  
	}
	return start;
}

node *Delete(node *start){
	node *ptr;
	if(start==NULL)
	{
		cout<<"\nUNDERFLOW";
        //return;
	}
	else
	{
	   ptr=start;
	   cout<<"\nDeleted item is "<<ptr->data;
	   start=start->next;
	   delete ptr;	
	}
	return start;
}

void display(node *start){
	node *ptr;
	ptr=start;
	if(start==NULL)
	 cout<<"\nQueue is Empty";
	else
	{
	  cout<<"\nPriority Queue data and Priority is :";	
	  while(ptr!=NULL)	
	  {
	  	cout<<endl<<ptr->data<<"\t"<<ptr->priority;
	  	
	  	ptr=ptr->next;
	  }
	} 
}

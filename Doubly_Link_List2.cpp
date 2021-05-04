#include<iostream>
using namespace std;

struct node{
	int data;
	node *prev,*next;
};
node *start=NULL;

//Create node of Doubly link list
node* createNode(node *start){
	node *Newnode,*ptr;
	int val;
	cout<<"\nEnter -1 to End";
	cout<<"\nEnter the data:";
	cin>>val;
	while(val!=-1){
		Newnode=new node();
		Newnode->data=val;
		if(start==NULL) // If List is Empty
		{
			Newnode->prev=Newnode->next=NULL;
			start=Newnode;
		}
		else  //If List is Non-Empty
		{
			ptr=start;
			while(ptr->next!=NULL)
			   ptr=ptr->next;
			ptr->next=Newnode; //ptr->next points to newnode
		    Newnode->prev=ptr; // newnode->prev points to ptr
			Newnode->next=NULL;
		}
		cout<<"\nEnter the data:";
		cin>>val;
		}
	return start;
}

//Insert Node at Beginning of Doubly link list
node* insertAtBeg(node *start)
{
	int val;
	node *Newnode=new node();
	cout<<"\nEnter the data in the list:";
	cin>>val;
	Newnode->data=val;
	Newnode->prev=Newnode->next=NULL;
	Newnode->next=start;
	start->prev=Newnode;
    start=Newnode;
    return start;
}

//Insert Node at End of Doubly link list 
node* insertAtEnd(node *start){
	int val;
	node *ptr;
	node *Newnode=new node();
	cout<<"\nEnter the data in the list:";
	cin>>val;
	Newnode->data=val;
	Newnode->prev=Newnode->next=NULL;
	ptr=start;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=Newnode;
	Newnode->prev=ptr;
	return start;
}

//Insert Node after given val in the doubly link list.
node* insertAtAfter(node *start){
	node *Newnode,*ptr;
	int val,item;
	Newnode=new node();
	cout<<"\nEnter the data at which val after node you want to insert:";
	cin>>item;
	cout<<"\nEnter the data in the list:";
	cin>>val;
	Newnode->data=val;
	Newnode->prev=Newnode->next=NULL;
	ptr=start;
	while(ptr->data!=item){
		ptr=ptr->next;  
	}
 	Newnode->prev=ptr;
	Newnode->next=ptr->next;
	//ptr->next->prev=Newnode; //ptr->next points to nextnode and nextnode->prev points to newnode
	ptr->next=Newnode;
	ptr->next->prev=Newnode; //ptr->next points to nextnode and nextnode->prev points to newnode
	return start;
}

//Delete Node at Beginning of the Doubly link list
node* deleteAtBeg(node *start){
	node *temp;
    if(start==NULL)//If List is Empty
    {
	  cout<<"\nList is Empty.\n";
      return start;
    }
    else //If list is Non-Empty
	{
    	temp=start;
    	start->prev=NULL;
		start=start->next;
	}  
	delete temp;
	return start;
}

//Delete Node at the End of the Doubly link list
node* deleteAtEnd(node *start){
	node *ptr,*temp;
	ptr=start;
    while(ptr->next->next!=NULL)
    {
    	ptr=ptr->next;
	}
	temp=ptr->next;
	ptr->next=NULL;
	delete temp; 
    return start;
}

//Delete Node After a given value in the Doubly link list
node* deleteAtAfter(node *start){
    node *temp,*ptr;
	int item;
	cout<<"\nEnter the data at which val after node you want to delete:";
	cin>>item;
	ptr=start;	
	while(ptr->data!=item)
	{  
        ptr=ptr->next;
	}
	if(ptr->next==NULL)
	{
		cout<<"\nNot Deleted next node\n";
		return start;
	}
	else if(ptr->next->next==NULL)
	{
		start=deleteAtEnd(start);
	}
	else
	{
	 temp=ptr->next;
	 ptr->next=temp->next;
	 temp->next->prev=ptr;//temp points to node and that node next pointer point to another node and that prev pointer points to ptr.
     delete temp;
    }
	return start;
}

//Display Data in the doubly link list.
void view(node *start){
	node *ptr;
	ptr=start;
	if(start==NULL)
	  cout<<"\nList is Empty.\n";
	else{
	   cout<<"\List is :";	
	   while(ptr!=NULL)
	   { 
		  cout<<ptr->data<<" ";
	      ptr=ptr->next;
	   }
    }
    cout<<endl;
}

//Search data in the Doubly link list 
node* search(node *start){
	node *ptr;
	int val;
	cout<<"\nEnter data you want to find:";
    cin>>val;
    ptr=start;
    while(ptr!=NULL){
    	if(ptr->data==val)
	    {
		  cout<<"\nYour data "<<val<<" is found\n";
	      break;
	    }
		ptr=ptr->next;
	}
	if(ptr->data!=val)
	  cout<<"\nData not found!\n";
	return start;
}

int main(){
	int ch;
	while(1){
		cout<<"\n1. Create List";
		cout<<"\n2. Insert at beggining";
		cout<<"\n3. Insert after specific val";
		cout<<"\n4. Insert at End";
		cout<<"\n5. Delete at beginging";
		cout<<"\n6. Delete after specific val";
		cout<<"\n7. Delete at End";
		cout<<"\n8. Display List";
		cout<<"\n9. Search data in the List";
		cout<<"\n0. Exit";
		cout<<"\nEnter your choice:";
		cin>>ch;
		switch(ch){
			case 1:start=createNode(start);
			    break;
			case 2:start=insertAtBeg(start);
			    break;
			case 3:start=insertAtAfter(start);
			    break;
			case 4:start=insertAtEnd(start);
			    break;
			case 5:start=deleteAtBeg(start);
			    break;
			case 6:start=deleteAtAfter(start);
			    break;
			case 7:start=deleteAtEnd(start);
			    break;				    
			case 8:view(start);
				break;
			case 9:	start=search(start);
		 	    break;
			case 0:
			exit(0);    
		}
	}
}

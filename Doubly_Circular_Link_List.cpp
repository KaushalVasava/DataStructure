#include<iostream>
using namespace std;

struct node 
{
	int data;
	node *prev,*next;
};
node *start=NULL;
node *createList(node *start){
	node *newnode,*ptr;
	int val;
	cout<<"\nEnter -1 to End";
	cout<<"\nEnter the data:";
	cin>>val;
	while(val!=-1){
		newnode=new node();
		newnode->data=val;
		if(start==NULL)
		{
			start=newnode;
		    newnode->prev=newnode->next=start;
		}
		else
		{
			ptr=start;
			while(ptr->next!=start)
			   ptr=ptr->next;
			ptr->next=newnode;
			newnode->prev=ptr;
			newnode->next=start;
		}
		cout<<"\nEnter the data:";
		cin>>val;
		}
	return start;
}

//Insert Node At Beginning of Doubly Circular link list.
node* insertAtBeg(node *start){
	node *newnode=new node();
	node *ptr;
	int val;
	cout<<"\nEnter data in list:";
	cin>>val;
    newnode->data=val;
	newnode->next=newnode->prev=NULL;
	newnode->next=start;
	ptr=start;
	while(ptr->next!=start)
	{
	   ptr=ptr->next;	
	}
	ptr->next=newnode;
	newnode->prev=ptr;
	start=newnode;
	return start;
}

//Insert Node At End of Doubly Circular link list.
node* insertAtEnd(node *start){
	node *newnode,*ptr;
    int val;
	newnode=new node();
    cout<<"\nEnter the data in the list:";
    cin>>val;
    newnode->data=val;
    newnode->next=newnode->prev=NULL;
    ptr=start;
    while(ptr->next!=start){
    	ptr=ptr->next;
	}
	ptr->next=newnode;
	newnode->next=start;
	newnode->prev=ptr;
	return start;
}

//Insert Node After at given position in the doubly circular link list.
node* insertAtAfter(node *start){
	node *newnode,*ptr;
	int val,item;
	newnode=new node();
	cout<<"\nEnter the data at which val after node you want to insert:";
	cin>>item;
	cout<<"\nEnter the data in the list:";
	cin>>val;
	newnode->data=val;
	newnode->next=newnode->prev=NULL;
	ptr=start;
	while(ptr->data!=item){
		ptr=ptr->next;  
	}
	newnode->next=ptr->next;
	ptr->next=newnode;
	newnode->prev=ptr;
	ptr->next->prev=newnode;
	return start;
}

//Delete Node at Beginning in the Doubly Circular link list.
node* deleteAtBeg(node *start){
	node *temp,*ptr;
    if(start==NULL)
    {
	  cout<<"\nList is Empty.\n";
      return start;
    }
    else{
    	ptr=start;
    	temp=start;
		while(ptr->next!=start)
    	{
    		ptr=ptr->next;
		}
		start=temp->next;
		//temp->next->prev=start;
		ptr->next=start;	
		//start->prev=ptr;
	}  
	delete temp;
	return start;
}

//Delete After at given data in the Doubly Circular link list.
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
	if(ptr->next==start)
	{
		cout<<"\nNot Deleted next node\n";
		return start;
	}
	else
	{
	  temp=ptr->next;
	  ptr->next=temp->next;
	  temp->next->prev=ptr;
	  delete temp;
    }
	return start;
}

//Delete Node at End of the Doubly Circular link list.
node* deleteAtEnd(node *start){
	node *ptr,*temp;
	ptr=start;
	if(start==NULL)
	{
		cout<<"\nList is Empty.\n";
		return start;
	}
	else{
     while(ptr->next->next!=start)
     {
    	ptr=ptr->next;
	 }
	 temp=ptr->next;
	 ptr->next=start;
	 delete temp; 
    }
    return start;
}

//Display Data in the List.
void view(node *start){
	node *ptr;
	ptr=start;
	if(start==NULL)
	  cout<<"\nList is Empty.\n";
	else{
	   cout<<"\List is :";	
	   while(ptr->next!=start)
	   { 
		  cout<<ptr->data<<" ";
	      ptr=ptr->next;
	   }
	   cout<<ptr->data;
    }
    cout<<endl;
}

//Search data in the List.
node* search(node *start){
	node *ptr;
	int val;
	if(start==NULL)
	{
		cout<<"\nList is Empty.\n";
		return start;
	}
	else{
	 cout<<"\nEnter data you want to find:";
     cin>>val;
     ptr=start;
     while(ptr->next!=start){
    	if(ptr->data==val){
	      cout<<"\nYour data is "<<val<<" found\n";
	      break;
		}
		ptr=ptr->next;
	 }
	 if(ptr->data!=val)
	   cout<<"\nData not found!\n";
    }
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
			case 1:start=createList(start);
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

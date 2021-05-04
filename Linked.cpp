#include<iostream>
#include<string.h>
using namespace std;

struct node{
	int mark;
	string name;
	node *next;
};
node *start=NULL;
node* createNode(node *start){
	node *newnode,*ptr;
	int val;
	string s;
	cout<<"\nEnter -1 to End";
	cout<<"\nEnter the Mark of Student:";
	cin>>val;
	if(val!=-1)
	{
	 cout<<"\nEnter the Name of Student:";
	 cin>>s;}
	 while(val!=-1){
		newnode=new node();
		newnode->mark=val;
		newnode->name=s;
		if(start==NULL){
			newnode->next=NULL;
			start=newnode;
		}
		else{
			ptr=start;
			while(ptr->next!=NULL)
			   ptr=ptr->next;
			ptr->next=newnode;
			newnode->next=NULL;
			}
			cout<<"\nEnter the Mark:";
			cin>>val;
			if(val!=-1){
			cout<<"\nEnter the Name:";
	        cin>>s;
	       }
		}
	return start;
}
node* insertAtBeg(node *start){
	node *newnode;
	int val;
	string s;
	newnode=new node();
	cout<<"\nEnter the Mark and Name of Student:";
	cin>>val>>s;
	newnode->mark=val;
	newnode->name=s;
	newnode->next=start;
	start=newnode;	
	return start;
}
node* insertAtEnd(node *start){
	node *newnode,*ptr;
	int val;
	string s;
	newnode=new node();
	cout<<"Enter the Mark and Name of student:";
	cin>>val>>s;
	newnode->name=s;
	newnode->mark=val;
	newnode->next=NULL;
	ptr=start;
	while(ptr->next!=NULL)
	  ptr=ptr->next;
	ptr->next=newnode;  
    return start;
}
node *insertAtAfter(node *start,int item){
	int val;
	string s;
	node *ptr;
	node *newnode=new node();
	cout<<"\nEnter the Mark and Name of student:";
	cin>>val>>s;
	newnode->name=s;
	newnode->mark=val;
	ptr=start;
	while(ptr->mark!=item){
	    ptr=ptr->next;
	}
	newnode->next=ptr->next;
    ptr->next=newnode;
	return start;
}
node *insertAtBefore(node *start,int item){
	int val;
	string s;
	node *ptr,*preptr;
	node *newnode=new node();
	cout<<"\nEnter the Mark and Name of student:";
	cin>>val>>s;
	newnode->name=s;
	newnode->mark=val;
	ptr=start;	
	while(ptr->mark!=item){
		preptr=ptr;
	    ptr=ptr->next;
	}
	preptr->next=newnode;
	newnode->next=ptr;
 	return start;
}
node* deleteAtBeg(node *start){
	node *temp;
	temp=start;
	start=start->next;
	delete temp;
	return start;
}
node* deleteAtEnd(node *start){
	node *ptr,*temp;
	ptr=start;
	while(ptr->next!=NULL){
		temp=ptr;
		ptr=ptr->next;
	}
	temp->next=NULL;
	delete(ptr);
	return start;
}
node *deleteAtAfter(node *start){
	node *ptr,*preptr,*temp;
	int val;
	cout<<"Enter the value after which the node has to deleted:";
	cin>>val;
	ptr=start;
	while(ptr->mark!=val){
		ptr=ptr->next;
	}
	temp=ptr->next;
	ptr->next=temp->next;
	delete(temp);
	return start;
}
node* deleteNode(node *start)
{
	node *temp,*ptr;
    int val;
    cout<<"Enter the value of the node which has to delete:";
    cin>>val;
    ptr=start;
    if(ptr->mark==val){
    	start=deleteAtBeg(start);
    	return start;
	}
	else{
		while(ptr->mark!=val){
			temp=ptr;
			ptr=ptr->next;
		}
		temp->next=ptr->next;
		delete ptr;
		return start;
	}
}
node* deleteList(node *start){
	node *ptr;
	if(start!=NULL){
		ptr=start;
		while(ptr!=NULL){
			cout<<ptr->mark<<" and "<<ptr->name<<" is to be deleted next\n";
			start=deleteAtBeg(ptr);
			ptr=start;
		}
	}	
	return start;
}
node* modify(node *start){
	node *ptr;
	int val,item;
	string s;
	cout<<"Enter val to update student mark and name:";
	cin>>item;
    ptr=start;
    while(ptr!=NULL)
    {
    	if(ptr->mark==item)
    	{
    		cout<<"Enter Mark and Name of student:";
    		cin>>val>>s;
    		ptr->mark=val;
    		ptr->name=s;
    		break;
       }
    	ptr=ptr->next;
	}
	return start;
}
node* search(node *start){
	node *ptr,*preptr;
	int val;
	int i=0;
	cout<<"Enter the Mark you want to find:";
	cin>>val;
	ptr=start;
	while(ptr!=NULL){
		if(ptr->mark==val){
		  cout<<val<<" is found\n";
		  break;
      	}
      	i++;
		ptr=ptr->next;
    }
    cout<<"\nloop run "<<i+1<<" times\n";
    if(ptr->mark!=val){
          cout<<"\nStudent is not found\n";
	}
    return start;
}
void viewList(){
	node *ptr;
	int i=0;
	ptr=start;
	if(start==NULL)
	  cout<<"\nList is Empty.\n";
	else
	{ 
	  cout<<"Name\t\tMarks";
	  while(ptr!=NULL){
	  	cout<<"\n";
		cout<<ptr->name<<"\t\t";
		cout<<ptr->mark;
		i++;
		ptr=ptr->next;
	  } 
	  cout<<"\nTotal node is "<<i;
   }
   cout<<endl;
}
node *sort(node *start)
{
   node *ptr1,*ptr2;
   int temp;
   string temp2;
   ptr1=start;
   while(ptr1->next!=NULL)
   {
     ptr2=ptr1->next;
     while(ptr2!=NULL)
     {
      if(ptr1->mark>ptr2->mark)
      {
       temp=ptr1->mark;
       temp2=ptr1->name;
       ptr1->mark=ptr2->mark;
       ptr1->name=ptr2->name;
       ptr2->mark=temp;
       ptr2->name=temp2;
      }
      ptr2=ptr2->next;
     }
     ptr1=ptr1->next;
   }
   
   viewList();
   return start;
}
main(){
	int ch,item;
	while(1){
		cout<<"\t\t......MENU.......";
		cout<<"\n\n1.Create node";
		cout<<"\n2.Insert node at the beggining in the list";
		cout<<"\n3.Insert node at the end in the list";
		cout<<"\n4.Insert node After given data in the list";
	    cout<<"\n5.Insert node Before given data in the list";
		cout<<"\n6.Delete node at the beggining";
	    cout<<"\n7.Delete node at the end of the list:";
		cout<<"\n8.Delete node after given data in the list";
        cout<<"\n9.Delete node at given data in the list";
        cout<<"\n10.Delete whole list";
        cout<<"\n11.View data in the list";
		cout<<"\n12.Searching data in the list";
		cout<<"\n13.Modify data in the list";
		cout<<"\n14.Sorting data in the list";
		cout<<"\n0.Exit";
		cout<<"\nEnter your choice:";
	    cin>>ch;
	    switch(ch){
	    	case 1:start=createNode(start);
	    	       break;
	    	case 2:start=insertAtBeg(start);
			       break; 
			case 3:insertAtEnd(start);
			       break;	         
			case 4:cout<<"Enter the value after which the data has to be inserted:";
			       cin>>item;
			       insertAtAfter(start,item);
			       break;
			case 5:cout<<"Enter the value before which the data has to be inserted:";
			       cin>>item;
			       insertAtBefore(start,item);
			       break;
			case 6:start=deleteAtBeg(start);
			       break;       
			case 7:start=deleteAtEnd(start);
			       break;       
			case 8:start=deleteAtAfter(start);
			       break;
			case 9:start=deleteNode(start);
				   break;
			case 10:start=deleteList(start);
				   break;
			case 11:viewList();
			       break;	   
			case 12:start=search(start);     
			       break;  
			case 13:start=modify(start);
			       break;       
			case 14:start=sort(start);
			      break;       
			case 0:
			       exit(0);	          
		}
	}
}

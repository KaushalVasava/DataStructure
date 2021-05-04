//      Doubly link list traversal,Insertition and Deletion Program.

#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *prev,*next;
};

Node *start=NULL;

void Insert(int val){
	Node *temp= new Node();
	temp->data=val;
	temp->prev=NULL;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
	}
	else
	{
		start->prev=temp;
        temp->next=start;
		start=temp;		
	}
}
void Delete(){
	Node *temp;
	if(start==NULL){
		cout<<"\nList is Empty.";
	}
	else
	{
		temp=start;
		start=start->next;
		start->prev==NULL;
		delete(temp);
	}
}
void viewList(){
   Node *temp;
   if(start==NULL)
     cout<<"\nList is Empty.";  
   else{
     temp=start;
    // cout<<temp->data;
     cout<<"\nList is :";
     do{
     	cout<<" "<<temp->data;
     	temp=temp->next;
     }while(temp->next!=NULL);
    }
   cout<<endl;
}

main(){
	int ch,x,n,i;
	while(1){
	cout<<"\n1. Insert \n2. Delete \n3. viewList \n4.Exit \nEnter your choice:";
	cin>>ch;
	switch(ch){
		case 1:
			 cout<<"\nHow many numbers?\n";
             cin>>n;
            for(i=1;i<=n;i++){
             cout<<"Enter the Number\n";
             cin>>x;
			 Insert(x);
		     }
			 break;
		case 2:
		     Delete();
			 break;
		case 3:
		     viewList();
			 break;
		case 4:
		     exit(0);	 	 	 
	}
  }
}

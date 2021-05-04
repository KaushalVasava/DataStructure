#include<iostream>
using namespace std;

struct node{
	int value;
	node *next;
};
void rearrange(node *list)
{
	node *p,*q;
	int temp;
	if((!list) || !list->next)
	  return;
	p=list;
	q=list;
	while(q)
	{
		temp=p->value;
		p->value=q->value;
		p=q->next;
		q=p?p->next:0;
	  }  
}
node *create(node *list)
{
	node *ptr,*newnode;
	int n;
	cout<<"\nEnter -1 to end:";
	cout<<"\nEnter the number :";
	cin>>n;
	if(n!=-1){
	while(n!=-1)
	{
		newnode=new node();
		newnode->value=n;
		if(list==0){
		 newnode->next=NULL;
		 list=newnode;
	    }
	    else{
	    	ptr=list;
	    	while(ptr!=NULL)
	    	 ptr=ptr->next;
	    	ptr->next=newnode;
	    	newnode->next=NULL;
		}
		 cout<<"\nEnter the number:";
		 cin>>n; 
	}
}
	return list;
}
int main()
{
	node *list;
	list=create(list);
	rearrange(list);
	return 0;
}

#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *start=NULL;
void Insert(int a){
	Node* temp=new Node();
	temp->data=a;
	temp->next=start;
	start=temp;
}
void Delete(int n)//Deletes Node at position n
{
	Node *temp;
	temp=start;
	if(n==0){
		start=temp->next; //start now points to second node.
		delete(temp);
	}
	for(int i=1;i<=n-2;i++)
      temp=temp->next;//temp points to (n-1)th node
      Node *temp2=temp->next;  //nth node
      temp->next=temp2->next; //(n+1)th node
      delete(temp2); //delete temp2
}
void Print(){
	Node *temp=start;
	cout<<"\nList is : ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	start=NULL;
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);//List is : 2,4,6,5
    Print();
    int  n;
    cout<<"\nEnter Position of Element you want to delete\n";
    cin>>n;
    Delete(n);
    Print();
    return 0;
}

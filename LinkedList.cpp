#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};
Node* head;     //global variable,can be accessed anywhere
void Insert(int a){
	Node* temp=new Node();
	temp->data=a;
	temp->next=head;
	head=temp;
}
void Print(){
	Node *temp=head;
	cout<<"List is : ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){ 
   head=NULL;
   cout<<"\nHow many numbers you want to insert?\n";
   int i,n,x;
   cin>>n;
   for(i=0;i<n;i++){
   	cout<<"Enter the Number\n";
   	cin>>x;
   	Insert(x);
   	Print();
 }
}

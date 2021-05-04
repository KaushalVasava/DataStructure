// Queue implement Using Array

#include<stdlib.h>
#include<iostream>
using namespace std;
#define max 5
int q1[max];
int rear=-1,front=-1;
void insert(int x){
   	if(rear>=max-1){
   		cout<<"Queue Overflow";
	}
	else{
	 rear++;
	 q1[rear]=x;
	 cout<<"\nInserted Element is "<<x;
    } 
}
void Delete(){
	if(front==rear ){
		cout<<"Queue Underflow";
	}
	else{
	 front++;
	 cout<<"Deleted element is "<<q1[front]; 

    } 
}	
void View(){
   if(front==rear){
	cout<<"Queue is Empty";
   }	
   else{
     for(int i=front+1;i<=rear;i++)
 	  cout<<q1[i]<<" ";
   }
}
main(){
	int ch;
	while(1){
		cout<<"\n1. Insert \n2. Delete \n3. Display \n4. Exit";
		cout<<"\nEnter your Choice: ";
		cin>>ch;
		switch(ch){
			case 1:
				 cout<<"\nEnter the element ";
				 cin>>ch;
				 insert(ch);
				break;
			case 2:
			   Delete();
			   break;
			case 3:
			   View();
			   break;
			case 4:
			   exit(1);      	
       }
	}
}



// Queue implement Using Array

#include<stdlib.h>
#include<iostream>
using namespace std;

#define max 5

class Queue{
	int q1[max];
	int rear,front;
  public:
    Queue(){
    	rear=-1;
    	front=-1;
    }
    void insert(int x){
    	if(rear==max-1){
    		cout<<"Queue Overflow";
		}
		else{
		 rear++;
		 q1[rear]=x;
		 cout<<"\nInserted Element is "<<x;
	    } 
	}
	void Delete(){
			if(rear==-1){
			cout<<"Queue Underflow";
		}
		else
		{
		   cout<<"Deleted element is "<<q1[front];
           front++;
	    } 
	}	
	void View(){
		if(rear==-1){
			cout<<"Queue is Empty";
		}
		else{
		 for(int i=front;i<=rear;i++)
			cout<<q1[i]<<" ";
	    }
	}
};

main(){
	int ch;
	Queue qu;
	while(1){
		cout<<"\n1. Insert \n2. Delete \n3. Display \n4. Exit";
		cout<<"\nEnter your Choice: ";
		cin>>ch;
		switch(ch){
			case 1:
				//int n;
				//cout<<"\nHow many value you want to enter?";
				//cin>>n;
				//for(int i=1;i<=n;i++){
				 cout<<"\nEnter the element ";
				 cin>>ch;
				 qu.insert(ch);
			   // }
				break;
			case 2:
			   qu.Delete();
			   break;
			case 3:
			   qu.View();
			   break;
			case 4:
			   exit(1);      	
       }
	}
}


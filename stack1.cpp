#include<iostream>
#include<stdio.h>
using namespace std;

struct ArrayStack{
	int top;
	int capacity;
	int *array;
};
ArrayStack* createStack(int cap){
	ArrayStack *stack;
	 stack=new ArrayStack();
	stack->capacity=cap;
	stack->top=-1;
	stack->array=malloc(sizeof(int)*stack->capacity);
	return stack;
}

int isFull(ArrayStack *stack){
	if(stack->top==stack->capacity-1)
	 return(1);
	else
	 return 0; 
}
int isEmpty(ArrayStack *stack){
	if(stack->top=-1)
	 return 1;
	else
	 return 0; 
}
void push(ArrayStack *stack,int item){
	if(!isFull(stack)){
		stack->top++;
		stack->array[stack->top]=item;
	}
}
int pop(ArrayStack *stack){
	int item;
	if(!isEmpty(stack)){
		item=stack->array[stack->top];
		stack->top--;
		return item;
	}
	return(-1);
}

main(){
	ArrayStack *stack;
	int ch,item;
	while(1){
		cout<<"\n1. Push";
		cout<<"\n2. Pop";
		cout<<"\n3. Exit";
		cout<<"\nEnter your choice:";
		cin>>ch;
		switch(ch){
			case 1:
				  cout<<"\nEnter a Number";
				  cin>>item;
				  push(stack,item);
				  break;
			case 2:
				  item=pop(stack);
				  if(item==-1)
				    cout<<"\nStack is Empty";
				  else
				    cout<<"\nPop value is "<<item;
				  break;
			case 3:
			      exit(0);	  
		}
	}
	return 0;
}

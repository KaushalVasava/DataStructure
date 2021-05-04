/*/ stack push and pop operation using Link list  */      
#include<stdlib.h>
#include<stdio.h>
struct ArrayStack{
	int top;
	int capacity;
	int *array;
};
struct ArrayStack* createStack(int cap){
	struct ArrayStack *stack;
	stack=malloc(sizeof(struct ArrayStack));
	stack->capacity=cap;
	stack->top=-1;
	stack->array=malloc(sizeof(int)*(stack->capacity));
	return(stack);
}

int isFull(struct ArrayStack *stack){
	if(stack->top==stack->capacity-1)
	 return(1);
	else
	 return(0); 
}
int isEmpty(struct ArrayStack *stack){
	if(stack->top==-1)
	 return(1);
	else
	 return(0); 
}
void push(struct ArrayStack *stack,int item){
	if(!isFull(stack)){
		stack->top++;
		stack->array[stack->top]=item;
    }
}
int pop(struct ArrayStack *stack){
	int item;
	if(!isEmpty(stack)){
		item=stack->array[stack->top];
		stack->top--;
		return(item);
	}
	return(-1);
}
void view(struct ArrayStack *stack){
	printf("Stack:");
	while(stack->top==-1)
	{
		printf("%d\n",stack->array[stack->top]);
		stack->array[stack->top]++;
	}
}
void main(){
	struct ArrayStack *stack;
	stack=createStack(4);
	int ch,item,n,i;
	while(1){
		printf("\n1. Push");
		printf("\n2. Pop");
		printf("\n3.View \n0.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				  printf("\nEnter a Number :");
				  scanf("%d",&item);
				  push(stack,item);
				  break;
			case 2:
				  item=pop(stack);
				  if(item==-1)
				    printf("\nStack is Empty");
				  else
				    printf("\nPoped value is %d",item);
				  break;
			case 3:view(stack);
			      break;	  
			case 0:
			      exit(0);	  
		}
	}
}

#include<stdio.h>
#include<ctype.h>
#define SIZE 100

int stack[SIZE];
int top=-1;

void push(char item){
	if(top>=SIZE-1){
		printf("\nSTACK OVERFLOW.");
	}
	else
	{
		top++;
		stack[top]=item;
	}
}
char pop(){
	char item;
	if(top<0)
	{
		printf("\nSTACK UNDERFLOW.");
	}
	else
	{
		item=stack[top];
		top--;
		return(item);
	}
}
void Evalpostfix(char postfix[]){
	int i,A,B,val;
	char ch;
	for(i=0;postfix[i]!=')';i++)
	{
		ch=postfix[i];
		if(isdigit(ch))
		{
			push(ch-'0');
		}
		else if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
		{
			A=pop();
			B=pop();
			switch(ch){
				case '*':
					val=B*A;
					break;
				case '/':
				    val=B/A;
					break;
				case '+':
				    val=A+B;
					break;
				case '-':
				    val=B-A;
					break;				
			}
			push(val);
		}
	}
	
	printf("\nResult: %d",pop());
}

void main(){
	int i;
	char postfix[SIZE];
	printf("\nEnter postfix Expression,\nPress right paranthesis ')' for end of expression\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%c",&postfix[i]);
		if(postfix[i]==')')
		 break;
	}
	Evalpostfix(postfix);
}

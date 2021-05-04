#include<stdio.h>
#include<ctype.h>
#define SIZE 100

int stack[SIZE];
int top=-1;

void push(char item){
	if(top>SIZE){
		printf("\nSTACK OVERFLOW.");
	}
	else{
		top++;
		stack[top]=item;
	}
}
char pop(){
	char item;
	if(top==-1)
	{
		printf("\nSTACK UNDERFLOW.");
	}
	else
	{
		item=stack[top];
		top--;
	}
	return(item);
}
void Evalprefix(char prefix[]){
	int i,A,B,val;
	char ch;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
	for(i=strlen(prefix)-2;i>=0;i--)   // becuase last element is ')' and array numbering start from n-1.
	{
		ch=prefix[i];
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
					val=A*B;
					break;
				case '/':
				    val=A/B;
					break;
				case '+':
				    val=A+B;
					break;
				case '-':
				    val=A-B;
					break;				
			}
			push(val);
		}
	}

	printf("\nResult: %d",pop());
}

void main(){
	int i,j;
	char prefix[SIZE];
	printf("\nEnter postfix Expression,\nPress right paranthesis ')' for end of expression\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%c",&prefix[i]);
		if(prefix[i]==')')
		 break;
	}
	Evalprefix(prefix);
}

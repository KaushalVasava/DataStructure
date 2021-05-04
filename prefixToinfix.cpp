#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

#define max 50

int top=-1;
char st[max];

void push(char val)
{
	if(top>max)
	{
		cout<<"\nStack  Overflow";
	}
	else
	{
	   top++;
	   st[top]=val;	
	}
}
char pop()
{
	char val;
	if(top==-1)
	{
		cout<<"\nStack Underflow";
	}
    else
	{
    	val=st[top];
    	top--;
	}
	return val;
}

int getpriority(char op)
{
	if(op=='/' || op=='*')
	  return 1;
	else if(op=='+' || op=='-')
	  return 0;  
}
int is_operator(char op)
{
	if(op=='+' || op=='-' || op=='/' || op=='*' )
	 return 1;
	else 
	 return 0; 
}
void prefixToinfix(char prefix[],char infix[])
{
	int i,j;
	char x,y,op,temp;
    push('(');
	for(i=strlen(prefix);i>=0;i--)
	{
		if(isdigit(prefix[i]) || isalpha(prefix[i]))
		{
			push(prefix[i]);
			i--;
		}
		if(is_operator(prefix[i]))
		{
			x=pop();
			y=pop();
		    op=prefix[i];
			switch(op)
			{
				case '+':
					temp=x+y;
				    break;
				case '-':temp=x-y;
				     break;
				case '*':temp=x*y;
				     break;
				case '/':temp=x/y;
				     break;	 	 	
			}
			push(temp);
			i--;
		}
	}
    infix[j]=pop();
}

int main()
{
	char infix[max],prefix[max];
	cout<<"\nEnter prefix Expression:";
	for(int i=0;i<3;i++)
	{
		cin>>prefix[i];
		if(prefix[i]==')')
		 break;
	}
	prefixToinfix(prefix,infix);
	cout<<"\nInfix Expression is :";
	puts(infix);
}

#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

#define max 50

int top=-1;
char st[max];

void push(char st[],char val)
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
char pop(char st[])
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
	if(op=='/' || op=='*' || op=='%')
	  return 1;
	else if(op=='+' || op=='-')
	  return 0;  
}
int is_operator(char op)
{
	if(op=='+' || op=='-' || op=='/' || op=='*' || op=='%')
	 return 1;
	else 
	 return 0; 
}

void infixTopostfix(char source[],char target[])
{
	int i=0,j=0;
	char temp;
	strcpy(target,"");
	while(source[i]!='\0')
	{
		if(source[i]=='(')
		{
			push(st,source[i]);
			i++;
		}
		else if(isdigit(source[i]) || isalpha(source[i]))
		{
			target[j]=source[i];
			i++;
			j++;
		}
		else if(is_operator(source[i]))
	    {
	    	while( (st[top]!='(') && (getpriority(st[top])>getpriority(source[i])) ) 
		    {
		    	target[j]=pop(st);
		    	j++;
			}
			push(st,source[i]);
			i++;
		}
		else if(source[i]==')')
		{
			while( (top!=-1) && (st[top]!='('))
			{
				target[j]=pop(st);
				j++;
		    }
			temp=pop(st);
			i++; 
		}
		else
		{
		   cout<<"\nInvalid Expression";
		   exit(0);	
		}
		target[j]='\0';
	}
}

int main()
{
	char infix[max],postfix[max];	
    cout<<"\nEnter infix expression : ";
    cin.getline(infix,max);   //cin.getline(variable , size);
    //strcpy(postfix,"");
    infixTopostfix(infix,postfix);
    cout<<"\nPostfix Expression is : "<<postfix;
	return 0;
}

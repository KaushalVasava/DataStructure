#include<iostream>
#include<string.h>
using namespace std;

int stk[10];
int top=-1;
int pop();
void push(int);
int get_type(char);
int main(){
	char prefix[10];
	int len,val,i,opr1,opr2,res;
	cout<<"\nEnter the prefix expression: ";
	cin>>prefix;
	len=strlen(prefix);
	for(i=len;i>=0;i--){
		switch(get_type(prefix[i])){
			case 0:
				val=prefix[i];
				push(val);
				break;
			case 1:
			    opr1=pop();
				opr2=pop();
				switch(prefix[i]){
					case '+':
						res=opr1+opr2;
						break;
					case '-':
					   res=opr1-opr2;
					   break;
					case '*':
					   res=opr1*opr2;
					   break;
					case '/':
					   res=opr1/opr2;
					   break;      	
				}	
				push(res);
		}
	}
	cout<<"\nResult = "<<stk[0];
	return 0;
}

void push(int val){
	stk[++top]=val;
}
int pop(){
	return(stk[top--]);
}
int get_type(char c){
	if(c=='+' || c=='-' || c=='*' || c=='/')
	  return 1;
	else
	  return 0;  
}

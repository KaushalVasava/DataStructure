#include <stdio.h>
#include <string.h>
#define MAX 100
int stk[MAX];
int top=-1;
int pop();
void push(int);

void push(int val)
{ 
  if(top==MAX-1)
   printf("STACK OVERFLOW.\n");
  else  
   stk[++top]=val;
}
int pop()
{ if(top==-1)
   printf("STACK UNDERFLOW.\n");
  else 
   return(stk[top--]);
}
/*int get_Type(char c)
{
  if(c=='+' || c=='-' || c=='*' || c=='/')
    return 1;
  else
    return 0;
}*/
int main()
{
  char prefix[MAX];
  int ch,len,val,i,opr1,opr2,res;
  printf("\n Enter the prefix expression : ");
  gets(prefix);
  len=strlen(prefix);
  for(i=len-1;i>=0;i--)
  {
   if(isdigit(prefix[i]))
   { 
	 val = prefix[i]-'0';
     push(val);
   }
   else if(prefix[i]=='+' || prefix[i]=='-' || prefix[i]=='*' || prefix[i]=='/'){
     opr1=pop();
     opr2=pop();
     switch(prefix[i])
     {
      case '+':
       res = opr1 + opr2;
       break;
      case '-':
       res = opr1 - opr2;
       break;
      case '*': 
       res = opr1 * opr2;
       break;
      case '/':
       res = opr1 / opr2;
       break;
     }
    push(res);
   }
  }
  printf("\n RESULT = %d", stk[0]);
  getche();
 return 0;
}

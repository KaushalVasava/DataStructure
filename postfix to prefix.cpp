#include<iostream>
#include<stdlib.h>
using namespace std;
#include<string.h>
#define MAX 100
void reverse(char []);
char infix[MAX], prefix[MAX],temp[MAX];
int main()
{
   cout<<"\n Enter any infix expression : ";
   cin>>infix;
   reverse(infix);
   //strcpy(prefix, "");
   //InfixtoPostfix(temp,prefix);
   /*printf("\nThe corresponding postfix expression is : ");
   puts(prefix);*/
   //strcpy(temp,"");
   //reverse(prefix);
   cout<<"\n The prefix expression is :"<<temp;
 return 0;
}
void reverse(char str[])
{
  int len,i=0,j=0;
  len=strlen(str);
  j=len-1;
  while(j>=0)
  {
   if(str[j]=='(')
    temp[i]=')';
   else if(str[j]==')')
    temp[i]='(';
   else
    temp[i]=str[j];
   i++;
   j--;
 }
 temp[i]='\0';
}


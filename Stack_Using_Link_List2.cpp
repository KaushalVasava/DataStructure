/* Implement Stack Using Link list */

#include<iostream>
#include<stdlib.h>
using namespace std;
struct stack
{
   int data;
   struct stack *next;
};
stack *top = NULL;
stack *push(stack *, int);
stack *display(stack *);
stack *pop(stack *);
int peek(stack *);

int main()
{
  int val, option;
  do
  {
   cout<<"\n\n *****MAIN MENU*****";
   cout<<"\n 1. PUSH";
   cout<<"\n 2. POP";
   cout<<"\n 3. PEEK";
   cout<<"\n 4. DISPLAY";
   cout<<"\n 0. EXIT"; 
   cout<<"\n Enter your option: ";
   cin>>option;
   switch(option)
   {
    case 1:
      cout<<"\nEnter the number to be pushed on stack:";
      cin>>val;
      //while(val!=-1)
      //{
	    top=push(top, val);
        //cout("\nEnter the number to be pushed on stack:");
        //cin("%d",&val);
	  //}
	  break;
    case 2:
      top=pop(top);
      break;
    case 3:
      val=peek(top);
      if(val!=-1)
       cout<<"\nThe value at the top of stack is "<<val;
      else
       cout<<"\nSTACK IS EMPTY";
      break;
    case 4:
      top=display(top);
      break;
   }
  }while(option!=0);
  return 0;
}
stack *push(stack *top, int val)
{
   stack *ptr;
   ptr=new stack();
   ptr->data=val;
   if(top==NULL) 
   {
     ptr->next=NULL;
     top=ptr; 
   } 
   else
   {
     ptr->next=top;
     top=ptr; 
   }
   return top;
}
stack *display(stack *top)
{
   stack *ptr;
   ptr=top;
   if(top==NULL)
    cout<<"\n STACK IS EMPTY";
   else
   {
    while(ptr!=NULL)
    {
      cout<<ptr->data<<"\t";
      ptr=ptr->next;
    }
   }
   return top;
}
stack *pop(stack *top)
{
   stack *ptr;
   ptr=top;
   if(top==NULL)
     cout<<"\n STACK UNDERFLOW";
   else
   {
     top=top->next;
     cout<<"\nThe value being deleted is "<<ptr->data;
     delete ptr;
   }
   return top;
}
int peek(stack *top)
{
   if(top==NULL)
    return -1;
   else
    return top->data;
}

/* Implement Stack Using Link list */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct stack
{
   int data;
   struct stack *next;
};
struct stack *top = NULL;
struct stack *push(struct stack *, int);
struct stack *display(struct stack *);
struct stack *pop(struct stack *);
int peek(struct stack *);

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
      cout<<"\nEnter the number to be pushed on stack (-1 to End ):";
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
struct stack *push(struct stack *top, int val)
{
   struct stack *ptr;
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
struct stack *display(struct stack *top)
{
   struct stack *ptr;
   ptr=top;
   if(top==NULL)
    cout<<"\n STACK IS EMPTY";
   else
   {
    while(ptr!=NULL)
    {
      cout<<endl<<ptr->data);
      ptr=ptr->next;
    }
   }
   return top;
}
struct stack *pop(struct stack *top)
{
   struct stack *ptr;
   ptr=top;
   if(top==NULL)
     cout<<"\n STACK UNDERFLOW";
   else
   {
     top=top->next;
     cout<<"\nThe value being deleted is "<<ptr->data;
     free(ptr);
   }
   return top;
}
int peek(struct stack *top)
{
   if(top==NULL)
    return -1;
   else
    return top->data;
}

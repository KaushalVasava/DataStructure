#include<stdio.h>
#include<stdlib.h>
#define size 5

int queue[5][2]={0};
int top=-1;
int bottom;
void push(int value,int pr)
{
  int i,j,k;
  if(top<size-1)
  {
   if(queue[top][1]>pr)
   {
     for(i=0;i<top;i++)
	 {
	   if(queue[i][1]>pr)
	   {
	     break;
	   }
     }
     for(j=top;j>=i;j--)
     {
       queue[j+1][0]=queue[j][0];
       queue[j+1][1]=queue[j][1];
     }
     top++;
     queue[i][0]=value;
     queue[i][1]=pr;
   }
   else
   {
    top++;
    queue[top][0]=value;
    queue[top][1]=pr;
   }
  }
  else
  {
    printf("queue overflow \n");
  }
}
void pop()
{
  int i;
  if(queue[0][0]==0)
  {
    printf("\n The queue is empty  \n");
  }
  else
  {
    printf("\nDeleted value is %d \n",queue[0][0]);
    for(i=0;i<top;i++)
    {
      queue[i][0]=queue[i+1][0];
      queue[i][1]=queue[i+1][1];
    }
    queue[top][0]=0;
    queue[top][1]=0;
    top--;
  }
}
void display()
{ 
  int i,j;
  if(top==-1)
  {
  	printf("\nQueue is Empty.");
  }
  else{
   printf("Element Priority \n"); 
   for(i=0;i<=top;i++)
   {
     for(j=0;j<2;j++)
     {
       printf("   %d  \t",queue[i][j]);
     }
     printf("\n");
   }
  }
}
int main()
{
  int i,j,ch,value,pr;
  while(1)
  {
    printf("\n\n1. Enqueue \n2. Dequeue \n3. Display\n4. Exit");
    printf("\n\nPlease Enter the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("\n Please Enter the number to be inserted :  ");
            scanf("%d", &value);
            printf("\n Please Enter the priority : ");
            scanf("%d", &pr);
            push(value,pr);
            break;
     case 2:pop();
            break;
     case 3:display();
            break;
	 case 4:exit(0);
     default:printf("You entered wrong choice\n");
    }
  }
}

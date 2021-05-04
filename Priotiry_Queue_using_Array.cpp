#include<iostream>
using namespace std;

#define size 5

int que[5][2]={0};
int top=-1;

void insert(int val,int pr){
	int i,j,k;
	if(top<size-1)
	{
		if(que[top][1]>pr)
		{
			for(i=0;i<top;i++)
			{
				if(que[i][1]>pr)
				 break;
			}
		    for(j=top;j>=i;j--)
		    {
			  que[j+1][0]=que[j][0];
			  que[j+1][1]=que[j][1];
		    }
		    top++;
		    que[i][0]=val;
		    que[i][1]=pr;	
	    }
	    else
	    {
	 	  top++;
		  que[top][0]=val;
		  que[top][1]=pr; 	
	    } 
    }
    else{
    	cout<<"\nQueue Overflow";
	}
}

void Delete(){
	int i;
	if(top==-1)
	  cout<<"\nQueue is Empty";
	else{
		cout<<"\nDeleted value is "<<que[0][0];
		for(i=0;i<top;i++)
		{
			que[i][0]=que[i+1][0];
			que[i][1]=que[i+1][1];
		}
		que[top][0]=0;
		que[top][1]=0;
		top--;
	}   
}

void display()
{
	int i,j;
	if(top==-1)
	  cout<<"\nQueue is Empty";
	else{
		cout<<"\nElement Priority:";
		for(i=0;i<=top;i++){
		  for(j=0;j<2;j++)
		    cout<<" \t"<<que[i][j];
		  cout<<endl;  
	    }
	}  
}

int main(){
	int i,j,ch,val,pr;
	while(1){
		cout<<"\n1.insert\n2.Delete\n3.Display\n4.Exit";
		cout<<"\nEnter your choice:";
	    cin>>ch;
	    switch(ch){
	    	case 1:cout<<"\nEnter the val and priority:";  
	    	       cin>>val>>pr;
	    	       insert(val,pr);
	    	       break;
	    	case 2:Delete();
			       break;       
		    case 3:display();
		           break;
		    case 4:exit(0);       
		}
	}
}

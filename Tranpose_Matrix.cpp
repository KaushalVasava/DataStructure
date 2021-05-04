#include<iostream>
using namespace std;
int main(){
	int a[10][10],i,j,b[10][10],r,c;
    cout<<"Enter rows and columns of matrix:";
    cin>>r>>c;
    cout<<"\nEnter the elements of the matrix:\n";
    for(i=1;i<=r;i++)
      for(j=1;j<=c;j++){
         cout<<"a["<<i<<"]["<<j<<"]:"; 
	     cin>>a[i][j];
      }
    cout<<"\nYour Matrix:\n";
	for(i=1;i<=r;i++)
	{
	 for(j=1;j<=c;j++)
	    cout<<a[i][j]<<"\t";
	 cout<<endl;	  
    }
    for(i=1;i<=r;i++)
	{
	 for(j=1;j<=c;j++)
	 	b[j][i]=a[i][j];
	 cout<<endl;	    
    }
    cout<<"\nTranspose Matrix :\n";
    for(i=1;i<=c;i++){
     for(j=1;j<=r;j++)
		cout<<b[i][j]<<"\t";
     cout<<endl;
    
	}
	return 0;
}

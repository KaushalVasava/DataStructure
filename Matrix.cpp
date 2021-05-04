#include<iostream>
using namespace std;
int i,j,r,c,a[10][10],b[10][10]; // globle variable declaration
void add(); //Function Declaration
void sub();
void mul();
void trans();

//main function
int main(){
	int ch;
	while(1){	
	cout<<"\n\n1. Addition of two matrix";
	cout<<"\n2. Substraction of two matrix";
	cout<<"\n3. Multiplication of two matrix";
	cout<<"\n4. Transpose of Matrix\n0. Exit";
	cout<<"\n Enter your choice:";
	cin>>ch;
	switch(ch){
	 case 1:add();
	        break;
	 case 2:sub();
	        break;
	 case 3:mul();
	        break;
	 case 4:trans();
	        break;		       
	 case 0:
	        exit(0);
	 default:
	        cout<<"\nInvalid Choice./nPlease Select valid Option.";		       
     }
	}
	return 0;
}

//Transpose Matrix
void trans(){
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
}

//Multiplication of Two Matrix
void mul(){
 int p,q,k,sum =0;
 int mul[10][10];
 cout<<"Enter the number of rows and columns of first matrix\n";
 cin>>r>>c;
 cout<<"Enter the elements of first matrix\n";
 for(i=1;i<=r;i++)
  for(j=1;j<=c;j++){
    cout<<"a["<<i<<"]["<<j<<"]:";
    cin>>a[i][j];
 }
 cout<<"\nEnter the number of rows and columns of second matrix\n";
 cin>>p>>q;
 if(c!=p)
  cout<<"\nMatrices with entered orders can't be multiplied with each other.\n";
 else{
  cout<<"\nEnter the elements of second matrix\n";
  for(i=1;i<=p;i++) 
   for(j=1;j<=q;j++){
     cout<<"b["<<i<<"]["<<j<<"]:"; 
     cin>>b[i][j];
   }
   for(i=1;i<=r;i++)
   { 
    for(j=1;j<=q;j++)
    {
     for(k=1;k<=p;k++)
     {
      sum=sum+a[i][k]*b[k][j];
     }  
      mul[i][j]=sum;
	  sum =0;
    }
   }
   cout<<"\nProduct of entered matrices:\n";
   for(i=1;i<=r;i++)
   {
    for(j=1;j<=q;j++)
     cout<<mul[i][j]<<"\t"; 
     cout<<endl;
   }
  }
}

//Addition of two Matrix
void add(){
	int m,n;
	cout<<"Enter the order of 1st sqaure(m x m) matrix: ";
	cin>>m>>n;
	cout<<"\nEnter the elements of matrix: ";
	for(i=1;i<=m;i++)
	  for(j=1;j<=n;j++){
        cout<<"a["<<i<<"]["<<j<<"]:";
	    cin>>a[i][j];
	  }  
	cout<<"\nYour matrix:\n";
	for(i=1;i<=m;i++){
	  for(j=1;j<=n;j++)
	    cout<<a[i][j]<<"\t";
	  cout<<endl;
    }
    cout<<"Enter the order of 2nd sqaure(m x m) matrix: ";
	cin>>r>>c;
    if(r!=c)
      cout<<"Error!\nAddition of this two matrix is not possible.\n";
    else{
	  cout<<"\nEnter the elements of matrix: ";
	  for(i=1;i<=r;i++)
	   for(j=1;j<=c;j++)
	   {
	     cout<<"b["<<i<<"]["<<j<<"]:";
		 cin>>b[i][j];
	   }
	  cout<<"\nYour matrix:\n";
	  for(i=1;i<=r;i++){
	   for(j=1;j<=c;j++)
	     cout<<b[i][j]<<"\t";
	   cout<<endl;
      }  
      int s[10][10];
      if(m>r && n>c){
      for(i=1;i<=m;i++)
       for(j=1;j<=n;j++)
         s[i][j]=a[i][j]+b[i][j];
      cout<<"\nAddition of two matrix is :\n";
	  for(i=1;i<=m;i++){
	   for(j=1;j<=n;j++)
	     cout<<s[i][j]<<"\t";
	   cout<<endl;	  
      }
     }
     else{
       for(i=1;i<=r;i++)
       for(j=1;j<=c;j++)
         s[i][j]=a[i][j]+b[i][j];
       cout<<"\nAddition of two matrix is :\n";
	   for(i=1;i<=r;i++){
	    for(j=1;j<=c;j++)
	      cout<<s[i][j]<<"\t";
	    cout<<endl;	  
      }	
	 }
    }
}

//Substraction of two Matrix
void sub(){
	int m,n;
	cout<<"Enter the order of 1st sqaure(m x m) matrix: ";
	cin>>m>>n;
	cout<<"\nEnter the elements of matrix: ";
	for(i=1;i<=m;i++)
	  for(j=1;j<=n;j++)
	  { 
	    cout<<"a["<<i<<"]["<<j<<"]:";
		cin>>a[i][j];
	  }
	cout<<"\nYour matrix:\n";
	for(i=1;i<=m;i++){
	  for(j=1;j<=n;j++)
	    cout<<a[i][j]<<"\t";
	  cout<<endl;
    }
    cout<<"Enter the order of 2nd sqaure(m x m) matrix: ";
	cin>>r>>c;
    if(r!=c)
      cout<<"\nError! \nSubstraction of two matrix is not possible.\n";
    else{
	  cout<<"\nEnter the elements of matrix:\n";
	  for(i=1;i<=r;i++)
	   for(j=1;j<=c;j++)
	   { 
	     cout<<"b["<<i<<"]["<<j<<"]:";
	     cin>>b[i][j];
	   }
	  cout<<"\nYour matrix:\n";
	  for(i=1;i<=r;i++){
	   for(j=1;j<=c;j++)
	     cout<<b[i][j]<<"\t";
	   cout<<endl;
      }  
      int s[10][10];
      if(m>r&&n>c){
      for(i=1;i<=m;i++)
       for(j=1;j<=n;j++)
         s[i][j]=a[i][j]-b[i][j];
      cout<<"\nSubstraction of two matrix is :\n";
	  for(i=1;i<=m;i++){
	   for(j=1;j<=n;j++)
	     cout<<s[i][j]<<"\t";
	   cout<<endl;	  
     }
    }
    else{
    for(i=1;i<=r;i++)
       for(j=1;j<=c;j++)
         s[i][j]=a[i][j]-b[i][j];
      cout<<"\nSubstraction of two matrix is :\n";
	  for(i=1;i<=r;i++){
	   for(j=1;j<=c;j++)
	     cout<<s[i][j]<<"\t";
	   cout<<endl;	  
     }	
	}
   }
  }

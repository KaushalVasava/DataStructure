#include<iostream>
using namespace std;
int main(){
	int i,j,r,c,a[10][10];
	cout<<"Enter the rows and columns of first matrix:";
	cin>>r>>c;
	cout<<"Enter elements of matrix:";
	for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      cin>>a[i][j];
    /*cout<<"Enter the rows and columns of second matrix:";
	cin>>r>>s;
	cout<<"Enter elements of matrix:";
	for(i=0;i<r;i++)
     for(j=0;j<s;j++)
      cin>>b[i][j];*/
    int det;
	   det=a[0][0]*((a[1][1])*(a[2][2])-(a[2][1])*(a[1][2]))-a[0][1]*((a[1][0])*(a[2][2])-(a[2][0])*(a[1][2]))+a[0][2]*((a[1][0])*(a[2][1])-(a[1][1])*(a[2][0]));
	   cout<<det; 
}

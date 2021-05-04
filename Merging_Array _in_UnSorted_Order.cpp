//Sorting of two sorted array
//and /* code */ aa vadu merging of two unsorted array.
#include<iostream>
using namespace std;
int main(){
	int i,j,n,m;
	int a[10],b[10],c[10];
	cout<<"\nEnter the size of first array:";
	cin>>n;
	cout<<"\nEnter the Elements in the array:";
    //int a[]={3,2,4,5,6,8};
    //int b[]={1,9,7};
    for(i=0;i<n;i++)
      cin>>a[i];
    for(i=0;i<n;i++)
      cout<<a[i]<<" ";
    cout<<endl;
    cout<<"\nEnter the size of second array:";
    cin>>m;
    cout<<"\nEnter the Elements in the array:";
    for(i=0;i<m;i++)
      cin>>b[i];
	for(i=0;i<m;i++)
   	  cout<<b[i]<<" ";
	for(i=0;i<n;i++)
	c[i]=a[i];
	for(i=0;i<m;i++)
	  c[i+n]=b[i];	  
	cout<<endl;   
	/*for(i=0;i<m+n;i++){            //comment karvani jyare merging of two unsotred array hoy.
		for(j=i;j<m+n;j++){
			if(c[i]>c[j])
			{
				int temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}*/
    for(i=0;i<m+n;i++)
     cout<<c[i]<<" ";
    return 0; 
}

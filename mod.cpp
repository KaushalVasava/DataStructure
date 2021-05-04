#include<iostream>
using namespace std;

int main()
{
	int mod=0,n;
	cout<<"\nEnter number:";
	cin>>n;	
	for(int i=0;i<n;i++)
    {
	  mod=n%10;
      cout<<"Mod is "<<mod;
      cout<<"\nEnter -1 to end:";
      cin>>n;
	}
}

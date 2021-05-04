#include<iostream>
using namespace std;
int mian(){
	char s1[7]="1234",*p;
	p=s1+2;
	*p='0';
	cout<<s1;
}

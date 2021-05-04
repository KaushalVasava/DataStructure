#include<iostream>
using namespace std;
typedef struct treeNode *treeptr;
struct treeNode{
	treeptr leftchild,rightsibling;
};

int Dosomething(treeptr tree)
{
	int value=0;
	if(tree!=NULL)
	{
		if(tree->leftchild==NULL)
		  value=1;
		else
		  value=Dosomething(tree->leftchild);
		  value=value+Dosomething(tree->rightsibling);  
	}
	return value;
}
int main()
{
	int v;
	v=Dosomething(*treeptr);
	cout<<v;
	return 0;
}

#include<iostream>
using namespace std;

struct Tree{
	char data;
	Tree *left,*right;
};

Tree *createTree(char val)
{
	Tree *newnode;
	newnode=new Tree();
	newnode->data=val;
    newnode->left=NULL;
	newnode->right=NULL;
    
	return newnode;
}
Tree *insertLeft(Tree *root,char val)
{
	root->left=createTree(val);
	return root->left;
}
Tree *insertRight(Tree *root,char val)
{
	root->right=createTree(val);
	return root->right;
}
void PreOrder(Tree *root)
{
	if(root!=NULL)
	{
	  cout<<root->data<<" ";
	  PreOrder(root->left);
	  PreOrder(root->right);	
    }
}
int main(){
	Tree *root=createTree('A');
	insertLeft(root,'B');
	insertRight(root,'C');
	insertLeft(root->left,'D');
	insertLeft(root->right,'E');
	/*insertLeft(root->left->left,'G');
	insertLeft(root->left->right,'H');
	insertLeft(root->left->right->right,'L');
	*/insertRight(root->right,'F');
	/*insertRight(root->right->left,'I');
	insertRight(root->right->right,'J');
	insertRight(root->right->right->left,'K');*/
    cout<<"\nPre Order Traversal : ";
    PreOrder(root);
	return 0;
}

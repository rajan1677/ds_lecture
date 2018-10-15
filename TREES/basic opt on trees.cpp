/*Bst-A binary tree in which left child is always less than the parent and the right child is alsways greater than parent*/
#include<iostream>
using namespace std;
class trees
{
struct bst
{
int info;
bst *left;	
bst *right;	
};	
public:
bst *root=NULL;
void create()
{
cout<<"enter number";	
int num;
cin>>num;
bst *new_node;
bst *check;
while(num!=-1)
{
new_node=new bst;
new_node->info=num;
new_node->left=NULL;
new_node->right=NULL;	
if(root==NULL)
root=new_node;
else
{
check=root;
  while(1)
  {
      if(num>check->info)
    {
    	if(check->right==NULL)
    	 { 
          check->right=new_node;
          break;	
         }
     	else
   	    check=check->right;
   }
	  else
	  {
	  	if(check->left==NULL)
	  	{
	  	check->left=new_node;	
	  	break;	
		}
		else
		{
			check=check->left;
		}
	  }
}
}
cout<<"enter num";
cin>>num;
}
}
void indisplay(bst *node)
{	
if(node==NULL)
return;
indisplay(node->left);
cout<<node->info<<" ";
indisplay(node->right);
}
void predisplay(bst *node)
{	
if(node==NULL)
return;
cout<<node->info;
predisplay(node->left);
predisplay(node->right);
}
void postdisplay(bst *node)
{	
if(node==NULL)
return;
postdisplay(node->left);
postdisplay(node->right);
cout<<node->info;	
}
void search()
{
bst *check;
int value;
cout<<"enter value u wanna search";
cin>>value;
check=root;
while(1)
{
if(check->info==value)
{
cout<<"found";
break;	
}	
else if(check->info<value && check->right!=NULL)
{
check=check->right;
}
else if(check->info>value && check->left!=NULL)
{
check=check->left;
}
else
{
cout<<"Not Found";
break;	
}
}
}
void min()
{
bst *check;
check=root;
while(check->left!=NULL)
{
check=check->left;	
}	
cout<<check->info<<endl;	
}
void max()
{
bst *check;	
check=root;
while(check->right!=NULL)
{
check=check->right;
}
cout<<check->info<<endl;		
}
};
int main()
{
trees T;
cout<<"Enter 1-create tree"<<endl;
cout<<"Enter 2-Infix display"<<endl;	
cout<<"Enter 3-Predisplay"<<endl;	
cout<<"Enter 4-Post Display"<<endl;
cout<<"Enter 5-Seach"<<endl;
cout<<"Enter 6-Find Max and Min element"<<endl;	
cout<<"Enter any option"<<endl;
int o;
cin>>o;
while(o!=-1)
{
if(o==1)
T.create();
if(o==2)
T.indisplay(T.root);
if(o==3)
T.predisplay(T.root);
if(o==4)
T.postdisplay(T.root);	
if(o==5)
T.search();
if(o==6)
{
T.max();	
T.min();	
}	
cin>>o;
}	
}	
	


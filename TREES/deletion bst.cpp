#include<iostream>
using namespace std;
class tree
{
struct bst
{
int info;
bst *left;	
bst * right;		
};
bst *check;
public:
bst *root=NULL;
void create()
{
int num;
cin>>num;
struct bst *new_node;
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
			{
				check=check->right;
			}
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
cin>>num;	
}
}	
void delete_1(int a)
{
bst *prev;	
check=root;
while(1)
{
if(check->info==a)
break;		
else if(check->info<a && check->right!=NULL)
{
prev=check;
check=check->right;
}
else if(check->info>a && check->left!=NULL)
{
prev=check;	
check=check->left;
}	
}
if(check->left==NULL&&check->right==NULL)
{
delete_leaf(check,prev);
}
if(check->left!=NULL&&check->right!=NULL)
{
int value;  
value=delete_second(check->right);
check->info=value;
}
else
delete_one(check,prev);
}
void delete_leaf( bst *check,bst *prev)
{
if(check->info<=prev->info)
prev->left=NULL;
else
{
prev->right=NULL;
}
delete check;	
}
void delete_one(bst *check,bst *prev)
{
if(prev->info>=check->info)
{
if(check->left!=NULL)
prev->left=check->left;
else
prev->left=check->right;
}	
else
{
if(check->right!=NULL)
prev->right=check->left;
else
prev->right=check->right;	
}	
}
int delete_second(bst *test)
{
int x;
bst *save;
while(test->left!=NULL)
{
save=test;
test=test->left;	
}	
x=test->info;
if(test->left==NULL&&test->right==NULL)
delete_leaf(test,save);
else
delete_one(test,save);
return x;
}

};
int main()
{
tree xyz;
int ans;
cout<<"enter the elements of tree";
xyz.create();
cout<<"enter node u wanna delete";
cin>>ans;
xyz.delete_1(ans);
}

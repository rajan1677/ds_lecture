#include<iostream>
using namespace std;
class heap
{
int a[100];
int size;
public:	
void input()
{
int i;	
cout<<"enter size";
cin>>size;
cout<<"enter elements";
for(i=1;i<=size;i++)
{
cin>>a[i];	
}
}
void max_heap()
{
int j;
for(j=size/2;j>=1;j--)
{	
max_heapify(j);
}
}
void min_heap()
{
int j;
for(j=size/2;j>=1;j--)
{	
min_heapify(j);
}
}
void max_heapify(int i)
{
int	l=i*2;
int r=(i*2)+1;
int larg,temp;
int flag=0;
if(l<size && a[l]>a[i])
{
larg=l;
flag=1;
}
else if(l<size && a[i]>a[l])
{
larg=i;
}
if(r<size && a[r]>a[larg])
{
larg=r;
flag=1;
}
if(flag==1)
{
temp=a[i];
a[i]=a[larg];
a[larg]=temp;
max_heapify(larg);	
}
}
void min_heapify(int i)
{
int	l=i*2;
int r=(i*2)+1;
int small,temp;
int flag=0;
if(l<size && a[l]<a[i])
{
small=l;
flag=1;
}
else if(l<size && a[i]<a[l])
{
small=i;
}
if(r<size && a[r]<a[small])
{
small=r;
flag=1;
}
if(flag==1)
{
temp=a[i];
a[i]=a[small];
a[small]=temp;
min_heapify(small);	
}
}	
void output()
{
int i;
for(i=1;i<=size;i++)
cout<<a[i]<<endl;		
}
void delete_root()
{
a[1]=a[size];
size=size-1;
max_heap();		
}
void insert_element(int e)
{
int temp;	
int i;
size=size+1;
a[size]=e;
i=size;
while(i>1 && a[i/2]<a[i])
{
temp=a[i/2];
a[i/2]=a[i];
a[i]=temp;	
i=i/2;	
}	
}
void update()
{
int index;
int val;	
cout<<"enter index"<<endl;
cin>>index;
cout<<"enter value";
cin>>val;
int i,temp;
if(val>a[index])
{
a[index]=val;
i=index;
while(i>1 && a[i/2]<a[i])
{
temp=a[i/2];
a[i/2]=a[i];
a[i]=temp;	
i=i/2;	
}
}
else
{
a[index]=val;	
max_heapify(index);	
}	
}
};
int main()
{
heap xyz;
int option;
cout<<"1-Enter elements in an array"<<endl;
cout<<"2-Create max heap"<<endl;
cout<<"3-Create min heap"<<endl;
cout<<"4-Display heap"<<endl;
cout<<"5-Delete the root"<<endl;
cout<<"6-Enter an element to insert"<<endl;
cout<<"7-To Update your heap"<<endl;
cout<<"-1-To exit"<<endl;
cout<<"Enter any option";
int num;
cin>>option;
while(option!=-1)
{
if(option==1)
xyz.input();
if(option==2)
xyz.max_heap();
if(option==3)
xyz.min_heap();	
if(option==4)
xyz.output();
if(option==5)
xyz.delete_root();
if(option==6)	
{
cout<<"enter an element to insert";
cin>>num;	
xyz.insert_element(num);
}
if(option==7)
xyz.update();
cout<<"enter again user";
cin>>option;	
}
cout<<"Thanks for using my Programme";
}

#include<iostream>
using namespace std;
class array
{
int a[100];
int size;
public:
void create()
{
cout<<"Enter size";/*entering size of array*/
cin>>size;
cout<<"Enter elements";/*enter elements*/
for(int i=0;i<size;i++)
{
     cin>>a[i];	
}	
}
void show()
{
cout<<"Entered elements in array are"<<endl;	
for(int i=0;i<size;i++)	
	{
		cout<<a[i]<<endl;
	}
}
void search(int e)/*linear search and Complexity is O(n)*/
{
int flag=0;
int pos;
for(int i=0;i<size;i++)
{
	 if(a[i]==e)
	 {
	 flag=1;
	 pos=i;
	 break;	
	 } 
}	
if(flag==1)
{
cout<<"Elements found:"<<e<<"is at"<<pos;	
}
else
{
cout<<"Not found";	
}
}
void insertion(int x,int pos)/*entering a new element in array*/
{
size=size+1;/*size increments by 1*/
for(int i=size;i>=pos-1;i--)/*right shift*/
{
a[i]=a[i-1];	
}
a[pos-1]=x;
}
void deletion(int pos)
{
for(int i=pos-1;i<size-1;i++)
{
a[i]=a[i+1];	
}	
size--;
}
};
int main()
{
array abc;
cout<<"1-Enter array"<<endl;
cout<<"2-Display array"<<endl;
cout<<"3-Insert an element"<<endl;
cout<<"4-Delete an element"<<endl;
cout<<"5-Search"<<endl;
cout<<"-1-To exit"<<endl;
int opt;
cout<<"Enter option";
cin>>opt;
while(opt!=-1)
{
if(opt==1)
{
	abc.create();
}	
if(opt==2)
{
   abc.show();	
}	
if(opt==3)
{
int pos;
int ele;
cout<<"Enter the position and element which u want to insert";	
cin>>pos>>ele;
abc.insertion(ele,pos);	
}	
if(opt==4)
{
int pos;
cout<<"enter positon to be omitted";
cin>>pos;
abc.deletion(pos);	
}	
if(opt==5)
{
int ele;
cout<<"enter element to be searched";
cin>>ele;
abc.search(ele);
}
cout<<"enter option again user";
cin>>opt;	
}
}




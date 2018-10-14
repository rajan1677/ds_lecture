#include<iostream>
using namespace std;
class array
{
int a[100];
int size;
int l=0;
int r;
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
r=size-1;
}
void search(int x)/*Binary search-Complexity is less than linear search=O(log n).Occurs in a sorted array*/
{
int flag=0;	
int mid=l + (r-1)/2;
if(l<=r)
{
if(a[mid]==x)
{
flag=1;
cout<<"Element found"<<endl<<"Position is:"<<mid+1;
}
else if(a[mid]<x)
{
l=mid+1;
search(x);		
}	
else if(a[mid]>x)
{
r=mid-1;
search(x);	
}
}
}
};
int main()
{
array abc;
int option;
cout<<"enter option"<<endl;
cin>>option;	
cout<<"1-Enter an array"<<endl;
cout<<"2-Search an element"<<endl;
cout<<"-1-To exit"<<endl;
int e;	
while(option!=-1)
{
if(option==1)
abc.create();
if(option==2)
{
cout<<"Enter a number";
cin>>e;
abc.search(e);	
}
cout<<"enter again";	
cin>>option;
}	
cout<<"Thanks for using programme";	
}

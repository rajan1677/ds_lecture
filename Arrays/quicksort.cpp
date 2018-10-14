/*Quick sort-BASED ON DIVIDE AND CONQUER.Avergae Complexity is n(O(log n) and in worst case is O(n^2)*/
/*performs faster than merge sort since operations are done in same array*/
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int partition(int a[],int low,int high)
{
int pi=a[high];
int i=low-1;
for(int j=low;j<=high-1;j++)
{
	if(a[j]<=pi)
	{
	i++;
	swap(&a[i],&a[j]);
	}
}	
swap(&a[i+1],&a[high]);
return (i+1);	
}

void quick_sort(int a[],int low,int high)
{
int pi;	
if(low<high)
	{
	  	pi=partition(a,low,high);/*obtaining pivot and dividing into partitions*/
	  	quick_sort(a,low,pi-1);
		quick_sort(a,pi+1,high);
	}
}
int main()
{
int a[100];
int size;
cout<<"Enter size";/*entering size of array*/
cin>>size;
cout<<"Enter elements";/*enter elements*/
for(int i=0;i<size;i++)
{
     cin>>a[i];	
}
int low=0;
int high=size-1;
quick_sort(a,low,high);	
cout<<"Entered elements in array after sorting"<<endl;	
for(int i=0;i<size;i++)	
	{
		cout<<a[i]<<endl;
	}
}


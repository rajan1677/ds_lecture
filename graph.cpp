#include<iostream>
using namespace std;
class graph
{
int a[100][100];
int vertex;
public:
graph(int v)
{
int i,j;	
vertex=v;
for(i=0;i<v;i++)
{
for(j=0;j<v;j++)
{
a[i][j]=0;	
}	
}
}	
void create_graph()
{
int i;
int j;
int k;
for(k=1;k<=vertex;k++)
{
cin>>i>>j;
a[i][j]=1;	
}	
}
void display_graph()
{
int i,j;
for(i=0;i<vertex;i++)
{
for(j=0;j<vertex;j++)
{
cout<<a[i][j]<<" ";	
}	
cout<<endl;	
}
}
};
int main()
{
int v;
cout<<"Enter number of vertices";
cin>>v;
graph g(v);
g.create_graph();
g.display_graph();	
}

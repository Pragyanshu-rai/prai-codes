#include<iostream>
using namespace std;
int main()
{
  int **a,b,c;
  b=2;
  c=3;
  //a=(int *)malloc(sizeof(int));
  a=new(int *[b]);
  for(int i=0;i<b;i++)
     a[i]=new(int [c]);
  for(int i=0;i<b;i++)
       for(int j=0;j<c;j++)
           cin>>*(*(a+i)+j);
  for(int i=0;i<b;i++)
       for(int j=0;j<c;j++)
           cout<<*(*(a+i)+j);
}

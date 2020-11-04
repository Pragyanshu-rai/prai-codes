#include<iostream>
using namespace std;
int main()
{
  int a[3],b[3],c[2],x=0,y=0;
  for(int i=0;i<3;i++)
    cin>>a[i];
  for(int i=0;i<3;i++)
    cin>>b[i];
  for(int i=0;i<3;i++)
    (a[i]>b[i])?(x++):((a[i]<b[i])?(y++):(x)); 
  c[0]=x;
  c[1]=y;
  for(int i=0;i<2;i++)
   cout<<c[i]; 
}

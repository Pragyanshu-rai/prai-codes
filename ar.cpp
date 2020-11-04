#include<iostream>
using namespace std;
int main()
{
  int *p,n,s=0;
  //cout<<"enter the size of the array"<<endl;
  cin>>n;
  p=new(int [n]);
  for(int i=0;i<n;i++)
    cin>>*(p+i);
  for(int i=0;i<n;i++)
    s=s+(*(p+i));
  cout<<s;   
}

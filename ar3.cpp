#include<iostream>
using namespace std;
int main()
{
  long int *p,s=0,a;
  cin>>a;
    p=new(long int [a]);
  for(int i=0;i<a;i++)
    cin>>*(p+i);
  for(int i=0;i<a;i++)
    s=s+(*(p+i));
  cout<<s;  
}

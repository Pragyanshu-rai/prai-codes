#include<iostream>
using namespace  std;
int main()
{
  long int *p,b=0,n=0,x=0,i=0;
   cin>>n;
  p=new(long int [n]);  
  for(i=0;i<n;i++)
      cin>>*(p+i);  
  for(i=0;i<n;i++)
      if(b<*(p+i))
          b=*(p+i);
  for(i=0;i<n;i++)
      if(b==*(p+i))
          x++;
  cout<<x;      
  return 0;
}


#include<iostream>
using namespace  std;
int main()
{
  long int a[5],ma=0,m=0,x,i=0,j=0;
  for(i=0;i<5;i++)
      cin>>a[i];  
  for(i=0;i<4;i++)
    {
     for(j=0;j<(4-i);j++)
        {
            if(a[j]>a[j+1])
               {
                  x=a[j];
                  a[j]=a[j+1];
                  a[j+1]=x;
               } 
        }
    }
  for(i=1;i<5;i++)
    ma=ma+a[i];
  for(i=0;i<4;i++)
    m=m+a[i];   
  cout<<m<<" "<<ma;       
  return 0;
}

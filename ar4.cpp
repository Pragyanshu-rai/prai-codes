#include<iostream>
using namespace std;
int main()
{
  int **p,i=0,j=0,r,n,x=0,y=0,z;
  cin>>r;
  n=r-1;
  p=new(int *[r]);
  for(i=0;i<r;i++)
    p[i]=new(int [r]);
  for(i=0;i<r;i++)
    for(j=0;j<r;j++)
       cin>>*(*(p+i)+j);
  for(i=0;i<r;i++)
    {
      for(j=0;j<r;j++)
         {
            if(i==j)
              x=x+(*(*(p+i)+i));
            if(j==(n-i))
            y=y+(*(*(p+i)+(n-i))); 
         } 
    }
  cout<<x<<" "<<y<<endl; 
  if(x>y)
   z=x-y;
  else
   z=y-x;
  cout<<z;  
}

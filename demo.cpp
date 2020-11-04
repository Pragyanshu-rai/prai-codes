#include<iostream>
using namespace std;
int sum(int *,int *);
int main()
{
  int b=20,a=10;
  sum(&a,&b);
  return 0;
}
int sum(int *x,int *y)
{
   int t;
   t=*x;
   *x=*y;   
   *y=t;
   cout<<*x<<" "<<*y<<endl;
   //return t;
}


#include<stdio.h>
int sum(int *,int *);
int main()
{
  int c,b=20,a=10;
  c=sum(&a,&b);
  printf("\n\t%d\n",c);
  return 0;
}
int sum(int *x,int *y)
{
   int t;
   t=x+y;
   return t;
}


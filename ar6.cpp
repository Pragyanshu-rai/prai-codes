#include<iostream>
using namespace std;
int main()
{
   float *p,i=0,a=0,b=0,c=0,y; 
   cin>>y;
   p=new(float [y]); 
   for(i=0;i<y;i++)
      cin>>*(a+i);
   for(i=0;i<y;i++)
      {
         if(*(p+i)==0)
           a++;
         else if(*(p+i)>0)
           b++;
         else if(*(p+i)<0)
           c++; 
      } 
   cout<<(b/y)<<endl;
   cout<<(c/y)<<endl;
   cout<<(a/y)<<endl;  
   return 0;
}

#include<iostream>
using namespace std;
int main()
{
  int a[100][100],n,b,i=0,j=0;
  cin>>n;
  b=n-1;
  for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
           {
              if(j<(b-i))
                cout<<" ";
              else 
                cout<<"#"; 
           } cout<<endl;
     }
  return 0;
}

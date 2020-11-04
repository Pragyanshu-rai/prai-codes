#include<iostream>
#include<vector>
//#include<stdlib.h>
using namespace std;
struct node
    {
      int data;
      struct node *next,*prev;
    }*nn=NULL,*root=NULL;
void factorial(int x)
{
	vector<int> v;
	for(int i=1,j=0;i<=x;i++)
	{
		if(x%i==0)
		{
			v.insert(j,i);
			j++;
		}
	}
	for(int i=0;i<v.size();i++)
		cout<<v.at(i);
}
main()
{ 
   int a;
  // while(1)
   // {
      cout<<""<<endl;
      cin>>a;
	  factorial(a);
    //  switch(a)
     //  {
          
      // }
          
}

#include<iostream>
using namespace std;
class demo
{
	public:
    int a;
    int get()
	{  
    	a=30;
    	cout<<"a = "<<a<<endl;
    }
};
int demo::*pdm=&demo::a;
int (demo::*pmf)()=&demo::get;
//int demo::*pdm=&demo::a;
//int (demo::*pmf)()=&demo::get;
int main()
{
	demo d,*p;
    p=new(demo);
	d.a =12;
    p->*pdm =20;
    cout<<"d.*pdm = "<<d.*pdm<<endl;
	cout<<"p->*pdm = "<<p->*pdm<<endl;
    (d.*pmf)();
	(p->*pmf)();
	return 0;
}

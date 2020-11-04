#include<iostream>
using namespace std;
class test
{
	public:
    int x;   
	test()
	{
		cout<<"hiiiiii"<<endl;
	}
	test(int x)
	{
		this->x=x;
		cout<<x<<" is the value \n";
	}
};
main()
{
	test t,t1(10);
}

#include<iostream>
using namespace std;
namespace floati
{
	float i = 23.69;
}
namespace inti 
{
	int i = 0;
}
int main()
{
	cout << inti::i << endl;
	cout << floati::i << endl;
	return 0;
}

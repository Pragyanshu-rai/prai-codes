#include<iostream>
using namespace std;
int fib(int number)
{
    if(number == 0 or number == 1)
        return number;
    return fib(number-1)+fib(number-2);
}
int main()
{
    int number;
    cin >> number;
    cout << fib(number) << endl;
    return 0;
}

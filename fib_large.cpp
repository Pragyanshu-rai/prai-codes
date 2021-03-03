#include<iostream>
using namespace std;
int array[61] = {0};
void fib()
{
    array[1]=1;
    for(int index=2; index<=60; index++)
        array[index] = (array[index-1]+array[index-2])%10;
}
int main()
{
    int number;
    cin >> number;
    fib();
    cout << array[number%60] <<endl;
    return 0;
}

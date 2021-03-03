#include<iostream>
using namespace std;
int array[61] = {0};
void fib()
{
    int sum=1;
    array[1]=1;
    for(int index=2; index<=60; index++)
        array[index] = ((array[index-1]+array[index-2])*(array[index-1]+array[index-2]))%10;
}
int sum(int number)
{
    int sum=0;
    for(int index=0; index<=number; index++)
        sum=(sum+array[index])%10;
    return sum%10;
}
int main()
{
    int number;
    cin >> number;
    fib();
    cout << sum(number%60) << endl;
    //cout << array[number%60] <<endl;
    return 0;
}

#include<iostream>
using namespace std;
long long int gcd(long long int n1, long long int n2)
{
    if(n1==0)
        return n2;
    if(n1>n2)
        return gcd(n1%n2, n2);
    return gcd(n2%n1, n1);
}
int main()
{
    long long int number1, number2;
        cin >> number1 >> number2;
        cout << gcd(number1, number2) <<endl;
    return 0;
}

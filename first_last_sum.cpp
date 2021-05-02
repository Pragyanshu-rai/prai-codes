#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int number;
    cin >> number;
        cout << (number%10)+(number/(long long int)pow(10, log10(number))) << endl; 
    return 0;
}

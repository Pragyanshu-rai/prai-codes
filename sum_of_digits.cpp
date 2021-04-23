#include<iostream>
using namespace std;
int sum_of_digits(int number)
{
    while(number/10 > 0)
    {
        int temp=number, sum=0;
        while(temp>0)
        {
            sum += temp%10;
            temp /= 10;
        }    
        number = sum;
    }
    return number;
}
int main()
{
    int number;
    cout << "Enter the Number: ";
    cin >> number;
    cout << sum_of_digits(number) << endl;
    return 0;
}

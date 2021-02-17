#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    long long size;
    cin >> size;
    vector<long long> arr(size);
    for(int index=0; index < size; index++)
        cin >> arr[index];
    if(size>1)
    {
        sort(arr.begin(), arr.end(), greater<long long>());
        cout << arr[0]*arr[1] << endl;
    }
    else if(size==1)
        cout << arr[0] << endl;
    else 
        cout << 0 << endl;
    return 0;
}

def fib(number):
    a=0
    b=1;
    time=0;
    c=1;
    if number == 0:
        return a
    if number == 1:
        return b
    time=2
    while time <= number:
        c=a+b
        a=b
        b=c
        time+=1
    return c


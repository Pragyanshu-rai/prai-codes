#include<iostream>
using namespace std;
int main()
{
    int size, even=0, odd=0, ei, oi; 
    cin >> size;
    for(int index=0; index<size; index++)
    {
        int number;
        cin >> number;
        if(number % 2 == 0)
        {    
            even++;
            ei=index+1;
        }
        else
        {    
            odd++;
            oi=index+1;
        }
    }
    if(even == 1)
        cout << ei <<endl;
    else
        cout << oi <<endl;
    return 0;
}

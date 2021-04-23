#include<iostream>
using namespace std;
long long int steps(long long int destination)
{
    long long int step=0;
    while(destination > 0)
    {
        if(destination >= 5)
        {
            step++;
            destination -= 5;
        }    
        else if(destination >= 4)
        {
            step++;
            destination -= 4;
        }    
        else if(destination >= 3)
        {
            step++;
            destination -= 3;
        }    
        else if(destination >= 2)
        {
            step++;
            destination -= 2;
        }    
        else
        {
            step++;
            destination--;
        }    
    }
    return step;
}
int main()
{
    long long int destination;
    cin >> destination;
    cout << steps(destination) << endl;
    return 0;
}

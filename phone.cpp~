#include<iostream>
#include<string>
using namespace std;
int main()
{
    int size, total=0, eights=0;
    string number;
    cin >> size;
    cin >> number;
    total=size/11;
    for(char num : number)
        if(num == '8')
            eights++;
    
    if(eights >= total)
        cout << total << endl;
    else
        cout << eights << endl;
    return 0;
}

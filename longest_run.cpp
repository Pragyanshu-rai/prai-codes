#include<iostream>
#include<string>
using namespace std;
/*int max(int* array, int size)
{
    int max = 0;
    for(int index; index<size; index++)
        if(array[index]>max)
            max=array[index];
    return max;
}*/
string rev(string bin)
{
    string new_bin=bin;
    for(int index=0; index<bin.length(); index++)
        new_bin[index]=bin[bin.length()-1-index];
    return new_bin;
}
string binary(int number)
{
    string bin="";
    while(number>0)
    {
        bin += to_string(number%2);
        number/=2;
    }
    return rev(bin);
}
int counter(int n)
{
    int max=0, count=0;
    string bin = binary(n);
    for(int index=0; index<bin.length(); index++)
    {
        if(bin[index] == '0')
        {
            if(max < count)
                max = count;
            count=0;
        }
        else
            count++;
    }
    if(max < count)
        max = count;
    return max;
}
int main(int argc, char** argv)
{
    int number = atoi(argv[argc-1]);
    cout << counter(number) <<" "<< binary(number) << endl;
    return 0;
}

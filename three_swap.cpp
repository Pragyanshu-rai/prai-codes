#include<iostream>
using namespace std;
void swaps(int *first, int *second, int *third)
{
    int temp = *first;
    *first = *third;
    *third = * second;
    *second = temp;
}
int main()
{
    int first, second, third;
    cin >> first >> second >> third;
    swaps(&first, &second, &third);
    cout << first <<"\n"<< second <<"\n"<< third << endl;
    return 0;
}

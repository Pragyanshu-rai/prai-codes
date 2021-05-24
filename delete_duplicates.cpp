#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
 unordered_set<int> diff;
 for (size_t i = 0; i < 10; i++)
 {
   int number;
   cin >> number;
   diff.insert(number);
 }
 for (auto num : diff)
 {
   cout <<num<<" ";
 }
 cout << endl;
 return 0;
}
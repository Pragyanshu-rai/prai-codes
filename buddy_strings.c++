#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
bool buddyStrings(string s, string goal)
{

    unordered_map<char, int> freq;
    int diff = 0, swaps[3];

    if (s.length() != goal.length() or s.length() == 1 or goal.length() == 1)
        return false;

    if (s == goal)
    {
        for (int index = 0; index < s.length(); index++)
            freq[s.at(index)]++;
        for (int index = 0; index < s.length(); index++)
            if (freq[s.at(index)] > 1)
                return true;
        return false;
    }

    for (int index = 0; index < s.length(); index++)
    {

        if (s.at(index) != goal.at(index))
        {
            swaps[diff] = index;
            diff++;
        }

        if (diff > 2)
            return false;
    }

    if(diff <= 1)
        return false;

    char temp = s[swaps[0]];
    s[swaps[0]] = s[swaps[1]];
    s[swaps[1]] = temp;

    if (s == goal)
        return true;
    return false;
}

int main()
{
    cout << buddyStrings("ab", "ab") << endl;
}
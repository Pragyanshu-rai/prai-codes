#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(int test)
{
    int size;
    cin >> size;
    string str;
    cin >> str;

    int le = str.find_first_of('*');
    int ri = str.find_last_of('*');

    ll ans = 0;
    int sheep = count(str.begin(), str.end(), '*');
    int lsheep = 0;
    for (int i = le; i <= ri; i++)
    {
        if (str[i] == '.')
        {
            ans += min(lsheep, sheep - lsheep);
        }
        else
        {
            lsheep++;
        }
    }
    cout << ans << "\n";
}

int main()
{
    int repeat;
    cin >> repeat;
    for (int test = 1; test <= repeat; test++)
        solve(test);
}
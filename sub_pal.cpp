#include<iostream>
using namespace std;
bool is_pal(string str)
{
    int start=0, end=str.length()-1;
    while(start < end)
    {
        if(str[start] != str[end])
            return false;
        start++;
        end--;    
    }
    return true;
}
string pal(string str)
{
    string res="";
    int max = 1, s=0, e=0;
    for(int start = 0; start < str.length()-1; start++)
    {
        for(int end = start+1; end < str.length(); end++)
        {
            string st="";
            for(int index=start; index<=end; index++)
                st=st+str[index];
            if(is_pal(st) && st.length() > max)
            {
                max = st.length();
                s=start;
                e=end;
            }
        }
    }
    for(int index=s; index<=e; index++)
        res+=str[index];
    if(e==0)
        return "";
    return res;
}
int main()
{
    string str;
    cin >> str;
    cout<< str <<"\n"<< pal(str) << endl;
    return 0;    
}

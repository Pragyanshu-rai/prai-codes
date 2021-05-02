#include<iostream>
#include<string>
#include<stack>
using namespace std;
string balance(string str)
{
    stack<char> st;
    for(char ch : str)
    {
        switch(ch)
        {
            case '(':
            case '{':
            case '[':
                st.push(ch);
                break;            
            case ')':
                if(st.top() != '(')
                    return "Unbalanced";
                st.pop();
                break;            
            case '}':
                if(st.top() != '{')
                    return "Unbalanced";
                st.pop();
                break;            
            case ']':
                if(st.top() != '[')
                    return "Unbalanced";
                st.pop();
                break;
        }
    }
    return st.empty() ? "Balanced" : "Unbalanced" ;
}
int main()
{
    string str;
    cin >> str;
    cout << balance(str) << endl;
    return 0;
}

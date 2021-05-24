#include<iostream>
#include<stack>
#include<string>
using namespace std;
string reverse(string st)
{
 string rev="";
 for(int index=st.length() - 1; index>=0; index--)
 {
  rev += st.at(index);
 }
 return rev;
}
string afterBackspace(string str)
{
 string res="";
 stack<char> st;
 for (char ch : str)
 {
  if(ch == '#')
  {
   st.pop();
  }
  else
   st.push(ch);
 }
 while(st.empty() == false)
 {
  res += (char)st.top();
  st.pop();
 }
 return reverse(res);
}
int main()
{
 string s1, s2;
 cin >> s1;
 cout << afterBackspace(s1) << endl;
 return 0;
}
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
bool is_operator(char symbol)
{
  switch (symbol)
  {
  case '+':
  case '-':
  case '/':
  case '*':
  case '%':
  case '(':
  case ')':
    return true;
  default:
    return false;
  }
}
int eval(int first, int second, char symbol)
{
  switch(symbol)
  {
    case '+':
      second = second+first;
      break;
    case '-':
      second = second-first;
      break;
    case '*':
      second = second*first;
      break;
    case '/':
      second = second/first;
      break;
    case '%':
      second = second%first;
      break;
  }
  return second;
}
int postfix_prefix(string expression, bool prefix=false)
{
  stack<int> st;
  if(prefix == true)
    reverse(expression.begin(), expression.end());
  // cout << expression << endl;
  for (char symbol : expression)
  {
    if (is_operator(symbol) == false)
    {
      st.push((int)(symbol - '0'));
    }
    else 
    {
      int first=(int)st.top();
      st.pop();
      int second=(int)st.top();
      st.pop();
      // cout << first << " " << second << endl;
      if(prefix == false)
        st.push(eval(first, second, symbol)); 
      else  
        st.push(eval(second, first, symbol)); 
    }
  }
  return (int)st.top();
}
int main()
{
  string expression;
  cout << "Enter The Postfix Expression -> ";
  // postfix test expression : 432*+5- -> 5
  cin >> expression;
  cout << "The Postfix Result is :- " << postfix_prefix(expression) << endl;
  cout << "Enter The Prefix Expression -> ";
  // prefix test expression : +4-*325 -> 5
  cin >> expression;
  cout << "The Prefix Result is :- " << postfix_prefix(expression, true) << endl;
  return 0;
}
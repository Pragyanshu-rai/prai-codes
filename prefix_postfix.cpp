#include <iostream>
#include<algorithm>
#include <string>
#include <stack>
using namespace std;
// string remove_space(string str)
// {
//   str.erase(remove(str.begin(), str.end(), ' '), str.end());
//   return str;
// }
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
int max(int num1, int num2)
{
  if (num1 >= num2)
    return num1;
  return num2;
}
int priority(char op)
{
  switch (op)
  {
    case '(':
    case ')':
      return 2;
    case '*':
    case '/':
    case '%':
      return 1;
    case '+':
    case '-':
      return 0;
  }
  return -1;
}
string ready(string str)
{
  string op="";
  for(char ch : str)
  {
    if(ch == '(')
      op += ')';
    else if(ch == ')')
      op += '(';
    else
      op += ch;
  }
  return op;
}
string to_postfix(string expression)
{
  expression += ')';
  string output = "";
  stack<char> st;
  st.push('(');
  for (char symbol : expression)
  {
    // cout << symbol << endl; // for testing purpose
    if (is_operator(symbol) == false)
      output += symbol;
    else
    {
      if (symbol == '(')
        st.push(symbol);
      else if (symbol == ')' and st.empty() == false)
      {
        while ((char)st.top() != '(')
        {
          output += (char)st.top();
          st.pop();
        }
        st.pop();
      }
      else
      {
        if (st.empty() == true)
        {
          st.push(symbol);
        }
        else
        {
          while (priority(symbol) <= priority((char)st.top()))
          {
            if ((char)st.top() != '(')
            {
              output += (char)st.top();
              st.pop();
            }
            else
              break;
          }
          st.push(symbol);
        }
      }
    }
  }
  while (st.empty() == false)
  {
    if ((char)st.top() != '(' and (char)st.top() != ')')
      output += (char)st.top();
    st.pop();
  }
  return output;
}
string to_prefix(string expression)
{
  expression = ready(expression);
  reverse(expression.begin(), expression.end());
  expression += ')';
  // cout << expression << endl;
  expression = to_postfix(expression);
  reverse(expression.begin(), expression.end());
  return expression;
}
int main()
{
  string expression;
  cout << "Enter The Infix Expression -> ";
  // postfix test expression : A+((B+C)+(D+E)*F)/G -> ABC+DE+F*+G/+
  // prefix test expression : A+((B+C)+(D+E)*F)/G -> +A/++BC*+DEFG
  cin >> expression;
  // getline(cin, expression);
  // expression = remove_space(expression);
  // cout << expression << endl;
  cout << "The Postfix Expression is :- " << to_postfix(expression) << endl;
  cout << "The Prefix Expression is :- " << to_prefix(expression) << endl;
  return 0;
}
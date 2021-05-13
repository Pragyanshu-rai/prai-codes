#include <iostream>
#include <string>
using namespace std;
int min(int num1, int num2)
{
  if (num1 >= num2)
    return num2;
  return num1;
}
int string_match(string str1, string str2)
{
  string str3 = "";
  int diff = abs((int)str1.length() - (int)str2.length()), moves = (str1.length() + str2.length());
  int sm_size = min((int)str1.length(), (int)str2.length());
  if (str1.length() > str2.length())
  {
    for (int index = diff; index < str1.length(); index++)
    {
      str3 += str1.at(index);
    }
    str1 = str3;
  }
  if (str2.length() > str1.length())
  {
    for (int index = diff; index < str2.length(); index++)
    {
      str3 += str2.at(index);
    }
    str2 = str3;
  }
  for (int index = sm_size - 1; index >= 0; index--)
  {
    if (str1.at(index) == str2.at(index))
    {
      moves -= 2;
    }
    else
    {
      return moves;
    }
  }
  return moves;
}
int main()
{
  string str1, str2;
  cin >> str1 >> str2;
  cout << string_match(str1, str2) << endl;
  return 0;
}
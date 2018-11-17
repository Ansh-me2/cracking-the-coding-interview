// Find if the given string is contains or not
// time-complexity : O(n)
// Input : ababccba
// outpput : Contains duplicate

#include <iostream>
#include <string>

using namespace std;

bool unique1 (std::string & str)
{
  bool char_set[256];
  std::fill(char_set, char_set + 256, false);
  for (char &i:str)
    {
      int val = i;
      if (char_set[val])
  	       return false;
      char_set[val] = true;
    }
  return true;
}

int main ()
{
  cout << "Enter a string ";
  string str;
  getline (cin, str);
  if (unique1 (str))
    cout << "No Duplicate";
  else
    cout << "Contains Duplicate";
  return 0;
}

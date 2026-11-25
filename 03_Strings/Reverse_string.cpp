// Reverse a string

#include <iostream>
#include <string>
#include <utility>
using namespace std;

void reverseString(string &s)
{
  int left = 0;
  int right = static_cast<int>(s.size()) - 1;
  while (left < right)
  {
    swap(s[left], s[right]);
    left++;
    right--;
  }
}

int main()
{
  string tests[] = {"hello", "", "a", "ab cd"};
  for (string s : tests)
  {
    reverseString(s);
    cout << s << "\n";
  }

  return 0;
}
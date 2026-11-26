// Check whether a string is a palindrome

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindromeString(const string &s)
{
  int left = 0;
  int right = static_cast<int>(s.size()) - 1;
  while (left < right)
  {
    while (left < right && !isalnum(static_cast<unsigned char>(s[left])))
      left++;
    while (left < right && !isalnum(static_cast<unsigned char>(s[right])))
      right--;

    if (tolower(static_cast<unsigned char>(s[left])) != tolower(static_cast<unsigned char>(s[right])))
    {
      return false;
    }
    left++;
    right--;
  }
  return true;
}

int main()
{
  string tests[] = {"madam", "A man, a plan, a canal: Panama", "hello", "", "ab"};
  for (const string &s : tests)
  {
    cout << "\"" << s << "\" -> " << (isPalindromeString(s) ? "palindrome" : "not a palindrome") << "\n";
  }

  return 0;
}
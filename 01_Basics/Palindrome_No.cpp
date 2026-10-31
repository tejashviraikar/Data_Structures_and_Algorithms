// Check whether a number is a palindrome.

#include <iostream>
using namespace std;

bool isPalindromeNumber(long long n)
{
  if (n < 0)
    return false;
  long long original = n;
  long long reversed = 0;
  while (n > 0)
  {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }
  return reversed == original;
}

int main()
{
  long long tests[] = {121, 123, -121, 7, 10, 0};
  for (long long n : tests)
  {
    cout << n << (isPalindromeNumber(n) ? " is a palindrome" : " is not a palindrome") << "\n";
  }
  return 0;
}
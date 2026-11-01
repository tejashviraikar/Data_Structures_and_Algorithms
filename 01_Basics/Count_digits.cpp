// Count the digits of a numbe

#include <iostream>
using namespace std;

int countDigits(int n)
{
  int count = 0;
  while (n > 0)
  {
    count++;
    n /= 10;
  }
  return count;
}

int main()
{
  int tests[] = {12345, 7, 100000};
  for (int n : tests)
  {
    cout << n << " has " << countDigits(n) << " digits" << "\n";
  }
  return 0;
}
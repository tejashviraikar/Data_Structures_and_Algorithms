// Reverse a number

#include <iostream>
using namespace std;

int reverseNumber(int n)
{
  long long value = n;
  bool negative = value < 0;
  if (negative)
    value = -value;

  long long reversed = 0;
  while (value > 0)
  {
    reversed = reversed * 10 + value % 10;
    value /= 10;
  }

  if (negative)
    reversed = -reversed;
  if (reversed > INT16_MAX || reversed < INT16_MIN)
    return 0;
  return static_cast<int>(reversed);
}

int main()
{
  int tests[] = {1235, -120, 100, 15423, 0};
  for (int n : tests)
  {
    cout << n << " -> " << reverseNumber(n) << "\n";
  }
  return 0;
}
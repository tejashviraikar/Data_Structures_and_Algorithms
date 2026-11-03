// Check whether a number is a perfect number

#include <iostream>
using namespace std;

bool isPerfect(int n)
{
  if (n <= 1)
    return false;
  int sum = 1; // 1 is a proper divisor of all numbers
  for (int i = 2; i <= n / i; i++)
  {
    if (n % i == 0)
    {
      sum += i;
      if (i != n / i)
        sum += n / i;
    }
  }
  return sum == n;
}

int main()
{
  int tests[] = {6, 28, 12, 1, 496, 8128, 25};
  for (int n : tests)
  {
    cout << n << (isPerfect(n) ? " is a perfect number" : " is not a perfect number") << "\n";
  }

  return 0;
}
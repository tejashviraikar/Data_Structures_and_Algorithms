// Find the factorial of a number

#include <iostream>
using namespace std;

long long factorial(int n)
{
  if (n < 0 || n > 20)
    return -1;
  long long result = 1;
  for (int i = 2; i <= n; i++)
  {
    result *= i;
  }
  return result;
}

int main()
{
  int tests[] = {5, 0, 1, 20, 21, -3};
  for (int n : tests)
  {
    long long f = factorial(n);
    if (f == -1)
      cout << n << " = " << "Invalid input\n";
    else
      cout << n << "! = " << factorial(n) << "\n";
  }

  return 0;
}
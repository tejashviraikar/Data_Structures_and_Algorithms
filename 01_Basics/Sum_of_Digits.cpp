// Find the sum of digits of a number

#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
  int sum = 0;
  while (n > 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main()
{
  int tests[] = {12345, 907, 0, 9};
  for (int n : tests)
  {
    cout << "Sum of digits of " << n << " = " << sumOfDigits(n) << "\n";
  }
  return 0;
}
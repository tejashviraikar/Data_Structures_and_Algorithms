// Check whether a number is an Armstrong number

#include <iostream>
using namespace std;

int countDigits(int n)
{
  int count = 0;
  do
  {
    count++;
    n /= 10;
  } while (n > 0);
  return count;
}

long long powerOfDigit(int digit, int exponent)
{
  long long result = 1;
  for (int i = 0; i < exponent; i++)
  {
    result *= digit;
  }
  return result;
}

bool isArmstrong(int n)
{
  if (n < 0)
    return false;
  int digits = countDigits(n);
  long long sum = 0;
  int temp = n;
  while (temp > 0)
  {
    sum += powerOfDigit(temp % 10, digits);
    temp /= 10;
  }
  return sum == n;
}

int main()
{
  int tests[] = {153, 9474, 123, 0, 370, 10};
  for (int n : tests)
  {
    cout << n << (isArmstrong(n) ? " is an Armstrong number" : " is not an Armstrong number") << "\n";
  }
  return 0;
}
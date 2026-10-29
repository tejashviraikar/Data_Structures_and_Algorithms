// Check whether a number is prime

#include <iostream>
using namespace std;

bool isPrime(long long n)
{
  if (n < 2)
    return false;
  for (int i = 2; i <= n / i; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main()
{
  int tests[] = {1, 2, 17, 25, 97, 0, -7};
  for (long long n : tests)
  {
    cout << n << (isPrime(n) ? " is prime" : " is not prime") << "\n";
  }
  return 0;
}
// Print all prime numbers in a range

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int n)
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

vector<int> primesInRange(int low, int high)
{
  vector<int> primes;
  for (int n = max(low, 2); n <= high; n++)
  {
    if (isPrime(n))
      primes.push_back(n);
    if (n == INT8_MAX)
      break;
  }
  return primes;
}

int main()
{
  int ranges[][2] = {{10, 50}, {1, 10}, {20, 10}, {-5, 3}};
  for (auto &r : ranges)
  {
    vector<int> p = primesInRange(r[0], r[1]);
    cout << "[ " << r[0] << ", " << r[1] << " ]: ";
    if (p.empty())
      cout << "none";
    for (int x : p)
      cout << " " << x;
    cout << "\n";
  }
  return 0;
}
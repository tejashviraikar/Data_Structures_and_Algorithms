//  Find the LCM of two numbers

#include <iostream>
using namespace std;

int gcdOf(int a, int b)
{
  if (a < 0)
  {
    a = -a;
  }
  if (b < 0)
  {
    b = -b;
  }
  while (b != 0)
  {
    int rem = a % b;
    a = b;
    b = rem;
  }
  return a;
}

int lcmOf(int a, int b)
{
  if (a == 0 || b == 0)
  {
    return 0;
  }
  if (a < 0)
  {
    a = -a;
  }
  if (b < 0)
  {
    b = -b;
  }
  return (a / gcdOf(a, b) * b);
}

int main()
{
  int tests[][2] = {{4, 6}, {21, 6}, {5, 0}, {100000, 99999}};
  for (auto &p : tests)
  {
    cout << "lcm(" << p[0] << ", " << p[1] << ") = " << lcmOf(p[0], p[1]) << "\n";
  }
  return 0;
}
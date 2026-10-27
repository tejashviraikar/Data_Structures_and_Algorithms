// Check whether a number is even or odd

#include <iostream>
using namespace std;

bool isEven(int n)
{
  return n % 2 == 0;
}

int main()
{
  int test[] = {10, -7, 4, 0, -3};
  for (int n : test)
  {
    cout << n << " is " << (isEven(n) ? "Even" : "Odd") << endl;
  }

  return 0;
}
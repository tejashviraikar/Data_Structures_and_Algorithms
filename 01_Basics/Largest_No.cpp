// Find the largest of three numbers

#include <iostream>
using namespace std;

int largestOfThree(int a, int b, int c)
{
  if (a >= b && a >= c)
    return a;
  if (b >= c)
    return b;
  return c;
}

int main()
{
  cout << largestOfThree(4, 9, 12) << "\n";
  cout << largestOfThree(-3, -5, -1) << "\n";
  cout << largestOfThree(8, 8, 8) << "\n";
  cout << largestOfThree(1, 4, 4) << "\n";

  return 0;
}
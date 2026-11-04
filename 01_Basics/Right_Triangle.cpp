// Print a right-angled triangle

#include <iostream>
using namespace std;

void printRightTriangle(int n)
{
  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= row; col++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
}

int main()
{
  printRightTriangle(5);
  return 0;
}
#include <iostream>
using namespace std;

void printPyramid(int n)
{
  for (int row = 1; row <= n; row++)
  {
    for (int space = 1; space <= n - row; space++)
    {
      cout << " ";
    }
    for (int col = 1; col <= (2 * row - 1); col++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}

int main()
{
  printPyramid(5);
  return 0;
}
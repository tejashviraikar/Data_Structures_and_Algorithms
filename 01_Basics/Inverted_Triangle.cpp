// Print an inverted triangle

#include <iostream>
using namespace std;

void printInvertedTriangle(int n)
{
  for (int row = n; row >= 1; row--)
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
  printInvertedTriangle(4);
  return 0;
}
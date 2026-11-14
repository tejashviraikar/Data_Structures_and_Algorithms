#include <iostream>
using namespace std;

void printNumTriangle(int n)
{
  for (int row = 1; row <= n; row++)
  {
    for (int value = 1; value <= row; value++)
    {
      cout << value << " ";
    }
    cout << "\n";
  }
}

int main()
{
  printNumTriangle(5);
  return 0;
}
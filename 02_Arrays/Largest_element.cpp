#include <iostream>
#include <vector>
using namespace std;

bool largestElement(const vector<int> &arr, int &result)
{
  if (arr.empty())
    return false;
  result = arr[0];
  for (size_t i = 1; i < arr.size(); i++)
  {
    if (arr[i] > result)
    {
      result = arr[i];
    }
  }
  return true;
}

int main()
{
  vector<vector<int>> tests = {{3, 9, -2, 9, 5}, {-8, -3, -10}, {7}, {}};
  for (const auto &arr : tests)
  {
    int largest;
    if (largestElement(arr, largest))
      cout << "Largest = " << largest << "\n";
    else
      cout << "Array is empty\n";
  }

  return 0;
}
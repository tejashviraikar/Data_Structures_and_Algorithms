#include <iostream>
#include <vector>
using namespace std;

bool smallestElement(const vector<int> &arr, int &result)
{
  if (arr.empty())
    return false;
  result = arr[0];
  for (size_t i = 1; i < arr.size(); i++)
  {
    if (arr[i] < result)
      result = arr[i];
  }
  return true;
}

int main()
{
  vector<vector<int>> tests = {{3, 9, -2, 9, 5}, {4}, {10, 20, 30}, {}};
  for (auto &arr : tests)
  {
    int smallest;
    if (smallestElement(arr, smallest))
      cout << "Smallest = " << smallest << "\n";
    else
      cout << "Array is empty\n";
  }

  return 0;
}
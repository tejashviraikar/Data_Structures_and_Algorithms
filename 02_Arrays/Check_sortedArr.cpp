// Check whether an array is sorted.

#include <iostream>
#include <vector>
using namespace std;

bool isSortedAscending(const vector<int> &arr)
{
  for (size_t i = 1; i < arr.size(); i++)
  {
    if (arr[i] < arr[i - 1])
      return false;
  }
  return true;
}

int main()
{
  vector<vector<int>> tests = {{1, 2, 2, 5}, {1, 3, 2}, {}, {4}, {5, 4, 3}};
  for (const auto &arr : tests)
  {
    cout << "{";
    for (size_t i = 0; i < arr.size(); i++)
    {
      if (i > 0)
        cout << ", ";
      cout << arr[i];
    }
    cout << "} : " << (isSortedAscending(arr) ? "Sorted" : "Not sorted") << "\n";
  }

  return 0;
}
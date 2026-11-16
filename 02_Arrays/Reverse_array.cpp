#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void reverseArray(vector<int> &arr)
{
  int left = 0;
  int right = static_cast<int>(arr.size() - 1);
  while (left < right)
  {
    swap(arr[left], arr[right]);
    left++;
    right--;
  }
}

void printArray(const vector<int> &arr)
{
  cout << "{";
  for (size_t i = 0; i < arr.size(); i++)
  {
    if (i > 0)
      cout << ", ";
    cout << arr[i];
  }
  cout << "}\n";
}

int main()
{
  vector<vector<int>> tests = {{1, 2, 3, 4, 5}, {1, 2}, {9}, {}};
  for (auto arr : tests)
  {
    reverseArray(arr);
    printArray(arr);
  }

  return 0;
}
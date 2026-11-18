// Remove duplicates from a sorted array

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicatesSorted(vector<int> &arr)
{
  if (arr.empty())
    return 0;
  int write = 1; // arr[0] is always unique
  for (size_t read = 1; read < arr.size(); read++)
  {
    if (arr[read] != arr[write - 1])
    {
      arr[write] = arr[read];
      write++;
    }
  }
  return write;
}

int main()
{
  vector<vector<int>> tests = {{1, 1, 2, 2, 2, 3, 5, 5}, {}, {7}, {4, 4, 4}};
  for (auto arr : tests)
  {
    int k = removeDuplicatesSorted(arr);
    cout << "Length " << k << ":";
    for (int i = 0; i < k; i++)
      cout << "  " << arr[i];
    cout << "\n";
  }

  return 0;
}
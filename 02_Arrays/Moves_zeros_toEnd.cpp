// Move all zeros to the end

#include <iostream>
#include <vector>
using namespace std;

void moveZerosToEnd(vector<int> &arr)
{
  size_t write = 0;
  for (size_t read = 0; read < arr.size(); read++)
  {
    if (arr[read] != 0)
    {
      arr[write] = arr[read];
      write++;
    }
  }
  while (write < arr.size())
  {
    arr[write] = 0;
    write++;
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
  vector<vector<int>> tests = {{0, 1, 0, 3, 12}, {0, 0}, {1, 2}, {}, {0, -1, 0, -2}};
  for (auto arr : tests)
  {
    moveZerosToEnd(arr);
    printArray(arr);
  }

  return 0;
}
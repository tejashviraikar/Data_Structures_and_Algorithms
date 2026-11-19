// Find the missing number in an array

#include <iostream>
#include <vector>
using namespace std;

long long findMissingNumber(const vector<int> &arr)
{
  long long n = static_cast<long long>(arr.size()) + 1; // numbers should be 1...n
  long long expectedSum = n * (n + 1) / 2;
  long long actualSum = 0;
  for (int x : arr)
    actualSum += x;
  return expectedSum - actualSum;
}

int main()
{
  vector<vector<int>> tests = {{1, 2, 4, 5, 6}, {2, 3, 4, 5}, {1, 2, 3, 4}, {1}, {}};
  for (const auto &arr : tests)
  {
    cout << "Missing : " << findMissingNumber(arr) << "\n";
  }

  return 0;
}
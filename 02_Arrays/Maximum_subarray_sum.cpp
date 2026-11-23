// Find the maximum subarray sum

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool maxSubarraySum(const vector<int> &arr, long long &bestSum)
{
  if (arr.empty())
    return false;
  long long currentSum = arr[0];
  bestSum = arr[0];
  for (size_t i = 1; i < arr.size(); i++)
  {
    currentSum = max(static_cast<long long>(arr[i]), currentSum + arr[i]);
    bestSum = max(bestSum, currentSum);
  }
  return true;
}

int main()
{
  vector<vector<int>> tests = {{-2, 1, -3, 4, -1, 2, 1, -5, 4}, {-3, -1, -2}, {5}, {}};
  for (const auto &arr : tests)
  {
    long long best;
    if (maxSubarraySum(arr, best))
      cout << "Max subarray sum = " << best << "\n";
    else
      cout << "Array is empty\n";
  }

  return 0;
}
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool secondLargest(const vector<int> &arr, int &result)
{
  long long first = LLONG_MIN, second = LLONG_MIN;
  for (int x : arr)
  {
    if (x > first)
    {
      second = first;
      first = x;
    }
    else if (x < first && x > second)
    {
      second = x;
    }
  }
  if (second == LLONG_MIN)
    return false;
  result = static_cast<int>(second);
  return true;
}

int main()
{
  vector<vector<int>> tests = {{12, 35, 1, 10, 34, 1}, {5, 5, 5}, {10, 20}, {-1, -5, -3}, {7}};
  for (const auto &arr : tests)
  {
    int answer;
    if (secondLargest(arr, answer))
      cout << "Second largest = " << answer << "\n";
    else
      cout << "No second largest\n";
  }

  return 0;
}
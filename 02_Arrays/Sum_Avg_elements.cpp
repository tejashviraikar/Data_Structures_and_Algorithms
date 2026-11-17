// Find the sum and average of array elements

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

bool sumAndAverage(const vector<int> &arr, long long &sum, double &average)
{
  if (arr.empty())
    return false;
  sum = 0;
  for (int x : arr)
    sum += x;
  average = static_cast<double>(sum) / arr.size();
  return true;
}

int main()
{
  vector<vector<int>> tests = {{10, 20, 30, 45}, {21475855, 214755}, {-4, 4}, {}};
  cout << fixed << setprecision(2);
  for (const auto &arr : tests)
  {
    long long sum;
    double average;
    if (sumAndAverage(arr, sum, average))
    {
      cout << "Sum : " << sum << ", average : " << average << "\n";
    }
    else
    {
      cout << "Array is empty\n";
    }
  }
  return 0;
}
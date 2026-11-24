// Solve the Two Sum problem

#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

vector<int> twoSumtwoPass(const vector<int> &arr, int target)
{
  unordered_map<int, int> indexOf;
  for (int i = 0; i < static_cast<int>(arr.size()); i++)
  {
    indexOf[arr[i]] = i;
  }

  for (int i = 0; i < static_cast<int>(arr.size()); i++)
  {
    long long need = static_cast<long long>(target) - arr[i];
    if (need < INT16_MIN || need > INT16_MAX)
      continue;
    auto it = indexOf.find(static_cast<int>(need));
    if (it != indexOf.end() && it->second != i)
    {
      return {i, it->second};
    }
  }
  return {}; // no pair exists
}

int main()
{
  vector<vector<int>> arrays = {{2, 7, 11, 15}, {3, 2, 4}, {3, 3}, {1, 2, 3}};
  int targets[] = {9, 6, 6, 10};
  for (size_t i = 0; i < arrays.size(); i++)
  {
    vector<int> r = twoSumtwoPass(arrays[i], targets[i]);
    if (r.empty())
      cout << "No pair for target " << targets[i] << "\n";
    else
      cout << "Indices " << r[0] << " and " << r[1] << "\n";
  }

  return 0;
}
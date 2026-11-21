// Find the intersection of two arrays

#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

vector<int> intersectionOfArrays(const vector<int> &a, const vector<int> &b)
{
  unordered_set<int> inFirst(a.begin(), a.end());
  set<int> common;
  for (int x : b)
  {
    if (inFirst.count(x))
      common.insert(x);
  }
  return vector<int>(common.begin(), common.end());
}

int main()
{
  vector<vector<int>> first = {{1, 2, 2, 3, 4}, {1, 2}, {}, {5, 5}};
  vector<vector<int>> second = {{2, 2, 4, 6}, {3, 4}, {1}, {5}};
  for (size_t i = 0; i < first.size(); i++)
  {
    vector<int> result = intersectionOfArrays(first[i], second[i]);
    cout << "common : ";
    if (result.empty())
      cout << "None";
    for (int x : result)
      cout << " " << x;
    cout << "\n";
  }

  return 0;
}
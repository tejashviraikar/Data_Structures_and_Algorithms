//  Find duplicate elements in an array

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findDuplicates(const vector<int> &arr)
{
  unordered_set<int> seen, reported;
  vector<int> duplicates;
  for (int x : arr)
  {
    if (seen.count(x))
    {
      if (!reported.count(x))
      {
        duplicates.push_back(x);
        reported.insert(x);
      }
    }
    else
    {
      seen.insert(x);
    }
  }
  return duplicates;
}

int main()
{
  vector<vector<int>> tests = {{1, 2, 3, 2, 4, 3, 2, 5}, {1, 2, 3}, {5, 5, 5, 5}, {}};
  for (const auto &arr : tests)
  {
    vector<int> d = findDuplicates(arr);
    cout << "Dupicates : ";
    if (d.empty())
      cout << " none";
    for (int x : d)
      cout << " " << x;
    cout << "\n";
  }

  return 0;
}
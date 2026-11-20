// Find the frequency of each element

#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, int> frequencyOfElements(const vector<int> &arr)
{
  map<int, int> counts;
  for (int x : arr)
  {
    counts[x]++;
  }
  return counts;
}

int main()
{
  vector<vector<int>> tests = {{4, 2, 4, 1, 2, 4, -3}, {}};
  for (const auto &arr : tests)
  {
    map<int, int> counts = frequencyOfElements(arr);
    if (counts.empty())
      cout << "Array is empty\n";
    for (const auto &entry : counts)
    {
      cout << entry.first << " appears " << entry.second << " time(s)\n";
    }
  }

  return 0;
}
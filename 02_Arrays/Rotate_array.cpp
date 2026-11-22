// Rotate an array by K positions

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateRight(vector<int> &arr, long long k)
{
  long long n = static_cast<long long>(arr.size());
  if (n == 0)
    return;
  k = ((k % n) + n) % n; // makes k a value in [0, n-1], also for negative k
  if (k == 0)
    return;
  reverse(arr.begin(), arr.end());
  reverse(arr.begin(), arr.begin() + k);
  reverse(arr.begin() + k, arr.end());
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
  vector<int> a = {1, 2, 3, 4, 5, 6, 7};
  rotateRight(a, 3);
  printArray(a);
  vector<int> b = {1, 2, 3};
  rotateRight(b, 10);
  printArray(b);
  vector<int> c = {1, 2, 3, 4};
  rotateRight(c, -1);
  printArray(c);
  vector<int> d = {};
  rotateRight(d, 5);
  printArray(d);

  return 0;
}
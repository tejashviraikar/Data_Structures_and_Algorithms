// Print the Fibonacci series
#include <iostream>
#include <vector>
using namespace std;

vector<int> fibonacciSeries(int n)
{
  vector<int> series;
  if (n <= 0 || n > 93)
    return series;
  int a = 0, b = 1;
  for (int i = 0; i < n; i++)
  {
    series.push_back(a);
    int next = a + b;
    a = b;
    b = next;
  }
  return series;
}

int main()
{
  int counts[] = {10, 1, 0};
  for (int n : counts)
  {
    vector<int> s = fibonacciSeries(n);
    cout << "n = " << n << ": ";
    for (int x : s)
    {
      cout << " " << x;
    }
    cout << "\n";
  }
  return 0;
}
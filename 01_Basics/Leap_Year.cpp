// Check whether a year is a leap year

#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
  return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main()
{
  int years[] = {2024, 1900, 2000, 2023};
  for (int y : years)
  {
    cout << y << (isLeapYear(y) ? " is a leap year" : " is not a leap year") << "\n";
  }

  return 0;
}
// Find the GCD of two numbers

#include <iostream>
using namespace std;

int gcdOf(int a, int b){
  if(a < 0){
    a = -a;
  }
  if(b < 0){
    b = -b;
  }
  while(b != 0){
    int rem = a % b;
    a = b;
    b = rem;
  }
  return a;
}

int main(){
  int tests[][2] = {{48, 18}, {17, 5}, {0, 9}, {-12, 18}, {0, 0}};
  for(auto& p : tests){
    cout << "gcd(" << p[0] << ", " << p[1] << ") = " << gcdOf(p[0], p[1]) << "\n"; 
  }
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  // Write your code here
  long long int X, Y;
  cin >> X >> Y;
  long long int k = 2;
  long long int count = 1;
  while (k * X <= Y) {
    count++;
    X = k * X;
  }
  cout << count << endl;
  return 0;
}

#include <iostream>

using namespace std;

int main() {
  int A, B, T;
  cin >> A >> B >> T;
  float T_a = T + 0.5;

  int count = 0;
  int k = 1;
  while (A * k < T_a) {
    count++;
    k++;
  }

  cout << B * count;
  return 0;
}

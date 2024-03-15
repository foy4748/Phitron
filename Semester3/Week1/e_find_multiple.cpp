#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int m = ceil((float)A / (float)C);

  int multiple_C = C * m;
  if (multiple_C <= B) {
    cout << multiple_C;
  } else {
    cout << -1;
  }
  return 0;
}

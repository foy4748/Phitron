#include <iostream>

using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if (A > B)
    swap(A, B);
  if (A == B || B - A == 1)
    cout << A + B;
  else
    cout << B + (B - 1);
}

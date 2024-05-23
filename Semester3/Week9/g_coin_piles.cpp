#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {
    int a, b;
    cin >> a >> b;

    bool condition1 = 2 * a - b >= 0 && (2 * a - b) % 3 == 0;
    bool condition2 = 2 * b - a >= 0 && (2 * b - a) % 3 == 0;

    if (condition1 && condition2) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}

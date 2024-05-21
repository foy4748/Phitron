#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  ll T;
  cin >> T;
  while (T--) {
    ll y, x;
    cin >> y >> x;
    if (y > x) {
      if (y % 2) {
        cout << (y - 1) * (y - 1) + 1 + (x - 1) << '\n';
      } else {
        cout << y * y - (x - 1) << '\n';
      }

    } else {
      if (x % 2) {
        cout << x * x - (y - 1) << '\n';
      } else {
        cout << (x - 1) * (x - 1) + 1 + (y - 1) << '\n';
      }
    }
  }
  return 0;
}

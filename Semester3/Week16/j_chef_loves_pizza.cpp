#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

void solve() {
  // Write your code here
  ll x;
  cin >> x;

  if ((x & (x - 1)) == 0) {
    cout << "0" << '\n';
    return;
  }

  ll p = 1;
  while (p < x)
    p *= 2;

  ll larger = p - x;
  ll smaller = x - larger;

  cout << smaller << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}

#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {
    ll N, a, b;
    cin >> N >> a >> b;
    if (b <= a) {
      cout << N * a << '\n';
    } else {
      ll k = min(b - a + 1, N);
      cout << (b - k + 1) * N + k * (k - 1) / 2 << '\n';
    }
  }
  return 0;
}

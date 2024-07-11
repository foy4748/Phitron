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
    ll N;
    cin >> N;
    vector<ll> v(N);
    for (ll i = 0; i < N; i++) {
      cin >> v[i];
    }

    ll cost = 0;
    ll maxDiff = 0;
    for (ll i = 1; i < N; i++) {
      if (v[i] < v[i - 1]) {
        ll diff = v[i - 1] - v[i];
        cost += diff;
        maxDiff = max(maxDiff, diff);
        v[i] = v[i - 1];
      }
    }
    cost += maxDiff;
    cout << cost << '\n';
  }
  return 0;
}

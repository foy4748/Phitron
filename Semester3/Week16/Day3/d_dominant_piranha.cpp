#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

void solve() {
  // Write your code here
  int N;
  cin >> N;
  vector<ll> v(N);
  vector<pair<ll, int>> p(N);
  ll current_max = -1;
  ll current_max_idx = -1;
  for (int i = 0; i < N; i++) {
    cin >> v[i];
    p[i].first = v[i];
    p[i].second = i;
  }
  sort(p.begin(), p.end(), greater<pair<ll, int>>());
  int ans = -1;
  for (auto it : p) {
    ll weight = it.first;
    ll idx = it.second;

    bool canEatForward = false;
    bool canEatBackward = false;

    if (idx == 0) {
      canEatForward = v[idx + 1] < weight;
    } else if (idx == N - 1) {
      canEatBackward = v[idx - 1] < weight;
    } else {
      canEatForward = v[idx + 1] < weight;
      canEatBackward = v[idx - 1] < weight;
    }

    if (canEatForward || canEatBackward) {
      ans = idx + 1;
      break;
    }
  }
  cout << ans << '\n';
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

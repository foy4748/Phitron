#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

void solve() {
  // Write your code here
  int N;
  cin >> N;
  vector<ll> v(N);
  ll first_item;
  cin >> first_item;
  v[0] = first_item;
  ll min_num = first_item;
  int min_idx = 0;
  for (int i = 1; i < N; i++) {
    cin >> v[i];
    if (min_num > v[i]) {
      min_num = v[i];
      min_idx = i;
    }
  }
  v[min_idx]++;
  ll mult = 1;
  for (ll c : v)
    mult *= c;
  cout << mult << '\n';
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

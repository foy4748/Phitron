#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  int N, target;
  cin >> N >> target;
  vector<pair<ll, int>> v(N);
  for (int i = 0; i < N; i++) {
    ll x;
    cin >> x;
    v[i] = {x, i + 1};
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < N; i++) {
    ll remaining = target - v[i].first;
    int k = N - 1;
    for (int j = i + 1; j < k; j++) {
      while (v[j].first + v[k].first > remaining) {
        k--;
      }
      if (j < k && v[j].first + v[k].first == remaining) {
        cout << v[i].second << ' ' << v[j].second << ' ' << v[k].second << '\n';
        return 0;
      }
    }
  }

  cout << "IMPOSSIBLE" << '\n';

  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}

#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  ll N, K;
  cin >> N >> K;
  vector<ll> result;
  for (ll i = 1; i * i <= N; i++) {
    if (N % i == 0) {
      result.push_back(i);
      if (N / i != i) {
        result.push_back(N / i);
      }
    }
  }
  sort(result.begin(), result.end());
  /* for (ll c : result) */
  /*   cout << c << ' '; */
  /* cout << endl; */

  if (K <= result.size())
    cout << result[K - 1] << '\n';
  else
    cout << -1 << '\n';

  return 0;
}

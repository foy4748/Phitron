#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  ll N, K;
  cin >> N >> K;
  vector<bool> result(N + 1, true);
  for (ll i = 2; i * i <= N; i++) {
    if (result[i]) {
      for (ll j = i + i; j <= N; j += i) {
        result[j] = false;
      }
    }
  }

  int k = 1;
  while (k != N) {
    if (result[k])
      cout << k << ' ';
    k++;
  }
  cout << '\n';

  result[K] ? cout << "YES" << '\n' : cout << "NO" << '\n';

  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}

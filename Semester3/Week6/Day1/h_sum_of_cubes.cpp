#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  map<ll, ll> mp;
  for (ll i = 1; i < 10001; i++) {
    mp[i * i * i]++;
  }

  int T;
  cin >> T;
  while (T--) {
    ll N;
    cin >> N;
    bool flag = false;
    for (ll i = 1; i < 10001; i++) {
      if (mp.find(N - i * i * i) != mp.end()) {
        flag = true;
        cout << "YES"
             << "\n";
        break;
      }
    }
    if (!flag)
      cout << "NO"
           << "\n";
  }
  return 0;
}

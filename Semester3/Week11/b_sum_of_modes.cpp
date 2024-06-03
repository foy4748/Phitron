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
    ll count0 = 0;
    ll count1 = 0;
    ll ans = 0;
    map<ll, ll> mp;
    string txt;
    cin >> txt;
    for (ll i = 0; i < N; i++) {
      char x = txt[i];
      if (x == '0')
        count0++;
      else
        count1++;
      ll twoModes = mp[count1 - count0];
      ll subArrMode = i + 1 - twoModes;
      if (count0 == count1) {
        twoModes++;
        subArrMode--;
      }
      ans += (twoModes * 2) + subArrMode;
      mp[count1 - count0]++;
    }
    cout << ans << "\n";
  }
  return 0;
}

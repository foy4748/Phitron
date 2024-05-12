#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  map<ll, ll> mp;
  ll N;
  cin >> N;
  ll Limit = (ll)sqrt(N);
  int n = N;
  for (int i = 2; i <= Limit; i++) {
    if (n % i == 0) {
      while (n % i == 0) {
        mp[i]++;
        n /= i;
      }
    }
  }

  for (auto it : mp) {
    cout << it.first << ' ' << it.second << '\n';
  }
  return 0;
}

#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

ll m_bit(ll k) {
  int count = 0;
  ll d = 1;
  while (k != 0) {
    count++;
    k = k >> d;
  }
  return count;
}

void solve() {
  // Write your code here
  int N;
  cin >> N;
  ll sum = 0;
  ll count = 1;
  vector<ll> arr(N), binary(N);
  map<ll, ll> mp;
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
    binary[i] = m_bit(arr[i]);
    mp[binary[i]]++;
  }
  ll total = 0;
  map<ll, ll>::iterator it;
  for (it = mp.begin(); it != mp.end(); it++) {
    ll p = it->second;
    total += (p * (p - 1)) / 2;
  }
  cout << total << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout << fixed;
  cout << setprecision(10);

  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}

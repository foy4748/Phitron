#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    map<int, int> mp;
    int max_occurance = 0;
    for (int i = 0; i < N; i++) {
      ll x;
      cin >> x;
      mp[x]++;
      max_occurance = max(max_occurance, mp[x]);
    }
    int ans = 0;
    while (max_occurance < N) {
      int rem = N - max_occurance;
      ans++;
      ans += min(rem, max_occurance);
      max_occurance += min(rem, max_occurance);
    }

    cout << ans << "\n";
  }
  return 0;
}

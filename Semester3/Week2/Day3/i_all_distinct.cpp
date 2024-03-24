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
    set<ll> arr;
    for (int i = 0; i < N; i++) {
      ll x;
      cin >> x;
      arr.insert(x);
    }
    int ans = arr.size();
    int remaining = N - arr.size();
    if (remaining % 2 == 1) {
      ans--;
    }
    cout << ans << "\n";
  }
  return 0;
}

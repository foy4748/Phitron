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
    int N, K;
    cin >> N >> K;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
      cin >> arr[i];
    sort(arr.begin(), arr.end());
    ll l = 0;
    ll r = 2e9;

    auto ok = [&](ll mid) {
      ll currentGuess = 0;
      for (ll i = 0; i < N; i++) {
        if (mid > arr[i]) {
          currentGuess += (mid - arr[i]);
        }
      }
      return currentGuess <= K;
    };
    ll ans;
    while (l <= r) {
      ll mid = l + (r - l) / (ll)2;
      if (ok(mid)) {
        ans = mid;
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}

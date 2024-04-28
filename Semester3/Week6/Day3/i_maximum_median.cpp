#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  ll N, T;
  cin >> N >> T;
  vector<int> arr(N);
  for (ll i = 0; i < N; i++) {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());

  // ll l = 1, r = 2e18;
  ll l = 1, r = 2e9;
  ll ans;
  while (l <= r) {
    ll mid = l + (r - l) / (ll)2;
    // Checking whether it is ok or not
    ll currentGuessedProducts = 0;
    for (ll i = (N / (ll)2); i < N; i++) {
      // currentGuessedProducts += mid / arr[i];
      currentGuessedProducts += arr[i] < mid ? (mid - arr[i]) : (ll)0;
    }

    if (currentGuessedProducts <= T) {
      ans = mid;
      l = mid + (ll)1;
    } else {
      r = mid - (ll)1;
    }
  }
  cout << ans << "\n";
  return 0;
}

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
    ll N;
    cin >> N;
    vector<int> arr(N);
    for (ll i = 0; i < N; i++) {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    auto ok = [&](ll mid) {
      ll cnt = 0;
      for (ll i = (N / 2); i < N; i++) {
        cnt += (arr[i] < mid ? (mid - arr[i]) : 0);
      }
      return cnt <= 3;
    };

    ll l = 0, r = arr[N - 1];
    ll ans;
    while (true) {
      if (l == r) {
        cout << l << endl;
        break;
      }
      if (l == r - 1) {
        if (check(l)) {
          cout << l << endl;
          break;
        } else {
          cout << r << endl;
          break;
        }
      }
      ll mid = l + (r - l) / (ll)2;
      int currIdx = 0;
      int currWorkers = 1;
      for (int i = 0; i < N; i++) {
        if (arr[i] - arr[currIdx] > 2 * mid) {
          currIdx = i;
          currWorkers++;
        }
      }

      if (currWorkers <= 3) {
        ans = mid;
        r = mid;
      } else {
        l = mid + (ll)1;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}

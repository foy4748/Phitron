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
    ll l = 0, r = arr[N - 1];

    auto ok = [&](ll mid) {
      ll currIdx = 0;
      ll currentWorker = 1;
      for (ll i = 0; i < N; i++) {
        if (arr[i] - arr[currIdx] > 2 * mid) {
          currIdx = i;
          currentWorker++;
        }
      }
      return currentWorker <= 3;
    };

    ll ans;

    while (true) {
      if (l == r) {
        cout << l << endl;
        break;
      }
      if (l == r - 1) {
        if (ok(l)) {
          cout << l << endl;
          break;
        } else {
          cout << r << endl;
          break;
        }
      }
      ll mid = l + (r - l) / (ll)2;

      if (ok(mid)) {
        r = mid;
      } else {
        l = mid + (ll)1;
      }
    }
  }
  return 0;
}

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
    int n, q;
    cin >> n >> q;
    int arr[n];
    ll prefix_sum[n];
    ll sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (i == 0)
        prefix_sum[i] = arr[i];
      else
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    while (q--) {
      ll temp_sum = prefix_sum[n - 1];
      int l, r, k;
      cin >> l >> r >> k;

      ll diff;
      if (l == 1)
        diff = prefix_sum[r - 1];
      else
        diff = prefix_sum[r - 1] - prefix_sum[l - 2];
      temp_sum -= diff;
      temp_sum += (ll)(r - l + 1) * k;

      temp_sum % 2 == 1 ? cout << "YES"
                               << "\n"
                        : cout << "NO"
                               << "\n";
    }
  }
  return 0;
}

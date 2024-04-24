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
    int N, Q;
    cin >> N >> Q;
    vector<ll> arr(N);
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<ll>());
    vector<ll> prefix_sum(N);
    prefix_sum[0] = arr[0];

    for (int i = 1; i < N; i++) {
      prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    while (Q--) {
      ll x;
      cin >> x;

      if (x > prefix_sum[prefix_sum.size() - 1])
        cout << "-1"
             << "\n";
      else {
        int candies = lower_bound(prefix_sum.begin(), prefix_sum.end(), x) -
                      prefix_sum.begin() + 1;
        cout << candies << "\n";
      }
    }
  }
  return 0;
}

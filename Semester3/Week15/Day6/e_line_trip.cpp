#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    int max_diff = -1;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      int diff;
      if (i == 0) {
        diff = v[i];
      } else {
        diff = v[i] - v[i - 1];
      }
      max_diff = max(max_diff, diff);
    }

    int end_trip = (x - v[n - 1]) * 2;
    max_diff = max(max_diff, end_trip);

    cout << max_diff << '\n';
  }
  return 0;
}

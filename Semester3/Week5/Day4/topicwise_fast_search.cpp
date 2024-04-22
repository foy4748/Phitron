#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  int N;
  cin >> N;
  vector<ll> arr;
  for (int i = 0; i < N; i++) {
    ll x;
    cin >> x;
    arr.push_back(x);
  }
  sort(arr.begin(), arr.end());
  int K;
  cin >> K;
  while (K--) {
    int p;
    cin >> p;
    auto lower = lower_bound(arr.begin(), arr.end(), p);
    int lower_idx = (lower - arr.begin()) + 1;

    int q;
    cin >> q;
    auto upper = upper_bound(arr.begin(), arr.end(), q);
    int upper_idx = (upper - arr.begin());

    cout << upper_idx - lower_idx + 1 << " ";
  }
  cout << "\n";
  return 0;
}

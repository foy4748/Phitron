#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int N;
  int K;
  cin >> N >> K;
  vector<ll> arr;
  for (int i = 0; i < N; i++) {
    ll x;
    cin >> x;
    arr.push_back(x);
  }
  for (int i = 0; i < K; i++) {
    int q;
    cin >> q;
    auto upper = upper_bound(arr.begin(), arr.end(), q);
    cout << (upper - arr.begin()) << "\n";
  }

  return 0;
}

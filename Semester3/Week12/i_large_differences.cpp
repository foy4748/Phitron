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
    vector<ll> v(N);
    vector<ll> storage;
    for (int i = 0; i < N; i++) {
      cin >> v[i];
    }
    ll sum = 0;
    for (int i = 0; i < N - 1; i++) {
      ll current = abs(v[i] - v[i + 1]);
      sum += current;
      storage.push_back(current);
    }
    cout << sum << '\n';
  }
  return 0;
}

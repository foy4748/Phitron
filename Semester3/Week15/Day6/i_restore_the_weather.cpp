#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

void solve() {
  // Write your code here
  int N, K;
  cin >> N >> K;
  vector<ll> B(N), ans(N);
  vector<pair<ll, int>> A(N);
  for (int i = 0; i < N; i++) {
    ll x;
    cin >> x;
    A[i].first = x;
    A[i].second = i;
  }
  for (int i = 0; i < N; i++) {
    cin >> B[i];
  }
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  for (int i = 0; i < N; i++) {
    ans[A[i].second] = B[i];
  }
  for (auto c : ans)
    cout << c << ' ';
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}

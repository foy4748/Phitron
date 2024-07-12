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
    int N, M;
    cin >> N;
    vector<ll> A(N);
    vector<ll> prefix_A(N);
    for (int i = 0; i < N; i++) {
      cin >> A[i];
      if (i != 0) {
        prefix_A[i] = prefix_A[i - 1] + A[i];
      } else {
        prefix_A[i] = A[i];
      }
    }
    sort(prefix_A.begin(), prefix_A.end());
    cin >> M;
    vector<ll> B(M);
    vector<ll> prefix_B(M);
    for (int i = 0; i < M; i++) {
      cin >> B[i];
      if (i != 0) {
        prefix_B[i] = prefix_B[i - 1] + B[i];
      } else {
        prefix_B[i] = B[i];
      }
    }
    sort(prefix_B.begin(), prefix_B.end());

    ll guess = prefix_A[N - 1] + prefix_B[M - 1];
    if (prefix_A[N - 1] < 0 || prefix_B[M - 1] < 0) {
      guess = max(prefix_A[N - 1], prefix_B[M - 1]);
    }
    ll result = guess >= 0 ? guess : 0;
    cout << result << '\n';
  }
  return 0;
}

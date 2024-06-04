#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  int N, Q;
  cin >> N >> Q;
  vector<int> arr(N);
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  vector<int> diffs(N + 1);
  for (int i = 1; i <= Q; i++) {
    int L, R;
    cin >> L >> R;
    L--, R--;
    diffs[L]++;
    diffs[R + 1]--;
  }
  for (int i = 1; i <= N; i++) {
    diffs[i] = diffs[i - 1] + diffs[i];
  }

  sort(arr.rbegin(), arr.rend());
  sort(diffs.rbegin(), diffs.rend());

  ll ans = 0;
  for (int i = 0; i < N; i++) {
    ans += (1LL * diffs[i] * arr[i]);
  }
  cout << ans << '\n';

  /*
int T;
cin >> T;
while (T--) {

}
  */
  return 0;
}

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
    int N, K;
    cin >> N >> K;
    vector<int> v(N);
    vector<int> diffs(N);
    int even_count = 0;
    for (int i = 0; i < N; i++) {
      cin >> v[i];
      if (v[i] % 2 == 0)
        even_count++;
      int diff = (((v[i] / K) * K) + K) - v[i];
      diffs[i] = diff;
      if (v[i] == K || v[i] % K == 0) {
        diffs[i] = 0;
      }
    }
    sort(diffs.begin(), diffs.end());
    if (even_count == 0 && K == 4)
      diffs[0] = min(2, diffs[0]);
    if (even_count == 1 && K == 4)
      diffs[0] = min(1, diffs[0]);
    if (even_count >= 2 && K == 4)
      diffs[0] = 0;
    cout << diffs[0] << '\n';
  }
  return 0;
}

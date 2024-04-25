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
    ll a, b;
    cin >> a >> b;
    int N;
    cin >> N;
    vector<ll> arr(N);
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    ll totalTime = b;
    for (int i = 0; i < N; i++) {
      totalTime += min(arr[i], a - 1);
    }
    cout << totalTime << "\n";
  }
  return 0;
}

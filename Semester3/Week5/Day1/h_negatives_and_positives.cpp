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
    int N;
    cin >> N;

    int neg_count = 0;
    ll absSum = 0;
    ll absMin;

    for (int i = 0; i < N; i++) {
      ll x;
      cin >> x;
      if (x < 0) {
        neg_count++;
      }
      absSum += abs(x);
      if (i == 0) {
        absMin = abs(x);
      } else {
        absMin = min(absMin, abs(x));
      }
    }

    if (neg_count % 2 == 0) {
      cout << absSum << "\n";
    } else {

      cout << absSum - (2ll) * absMin << "\n";
    }
  }
  return 0;
}

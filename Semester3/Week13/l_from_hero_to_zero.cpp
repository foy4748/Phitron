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
    ll N, K;
    cin >> N >> K;
    ll steps = 0;

    ll temp = N;
    while (temp != 0) {
      if (temp % K != 0) {
        steps += temp % K;
        temp -= temp % K;
      } else {
        temp /= K;
        steps++;
      }
    }
    cout << steps << '\n';
  }
  return 0;
}

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
    int K;
    cin >> K;

    if (!(K % 2)) {
      for (int i = 1; i <= (K / 2); i++) {
        cout << i << ' ' << K - i + 1 << ' ';
      }
      cout << '\n';
    } else {
      for (int i = 1; i <= (K / 2); i++) {
        cout << i << ' ' << K - i << ' ';
      }
      cout << K << '\n';
    }
  }
  return 0;
}

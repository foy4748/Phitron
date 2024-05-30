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
    int A, B, K;
    cin >> A >> B >> K;
    int temp = B;
    int ans = 0;
    while (temp > A) {
      if (temp % K == 0 && temp / K >= A)
        temp /= K, ans++;
      else {
        if ((temp / K) < A) {
          ans += (temp - A);
          temp -= (temp - A);
        } else
          ans += (temp % K), temp -= (temp % K);
        if (temp <= A)
          break;
      }
    }

    cout << ans << '\n';
  }
  return 0;
}

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
    ll x, y;
    cin >> x >> y;
    ll count = 0;
    for (int i = 0; i < 30; i++) {
      bool flag1 = false;
      bool flag2 = false;
      if (x & (1LL << i))
        flag1 = true;
      if (y & (1LL << i))
        flag2 = true;
      if (flag1 == flag2)
        count++;
      else
        break;
    }
    cout << (1LL << count) << '\n';
  }
  return 0;
}

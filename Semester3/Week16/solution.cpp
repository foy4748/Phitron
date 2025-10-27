#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

void solve() {
  // Write your code here
  int a1, b1;
  cin >> a1 >> b1;
  int a2, b2;
  cin >> a2 >> b2;
  if (a1 > b1)
    swap(a1, b1);
  if (a2 > b2)
    swap(a2, b2);
  if (b1 == b2 && a1 + a2 == b1)
    cout << "YES" << '\n';
  else
    cout << "NO" << '\n';
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

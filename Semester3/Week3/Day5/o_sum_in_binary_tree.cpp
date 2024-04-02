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
    ll N;
    cin >> N;
    ll tempN = N;
    ll sum = 0;

    while (tempN != 1) {
      // cout << tempN << " ";
      sum += tempN;
      tempN /= 2;
    }
    // cout << "\n";

    cout << sum + 1 << "\n";
  }
  return 0;
}

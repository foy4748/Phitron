#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isReachable(ll num, ll target) {
  if (num == target)
    return true;
  else if (num > target)
    return false;

  bool opt1 = isReachable(num * 10, target);
  bool opt2 = isReachable(num * 20, target);
  return opt1 || opt2;
}

int main() {
  // Write your code here
  ll T;
  cin >> T;
  while (T--) {
    ll input;
    cin >> input;
    isReachable(1, input) ? cout << "YES" << endl : cout << "NO" << endl;
  }
  return 0;
}

#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

bool isPerfectSquare(ll n) {
  double guess = sqrt(n);
  ll r = floor(guess);
  if (r * r == n)
    return true;
  else {
    r = ceil(guess);
    return r * r == n;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  ll T;
  cin >> T;
  while (T--) {

    ll N;
    cin >> N;
    isPerfectSquare(N) && N % (ll)sqrt(N) != 0 && N != 1 ? cout << "YES" << '\n'
                                                         : cout << "NO" << '\n';
  }
  return 0;
}

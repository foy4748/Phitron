#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

bool isPrime(ll N) {
  for (ll i = 2; i * i <= N; i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return true;
}

void solve() {
  // Write your code here
  ll x;
  cin >> x;

  vector<ll> primes;
  ll X = x;
  while (true) {
    if (isPrime(X))
      primes.push_back(X);
    X++;
    if (primes.size() == 2)
      break;
  }

  x == 1 ? cout << 6 << '\n' : cout << primes[0] * primes[1] << '\n';
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

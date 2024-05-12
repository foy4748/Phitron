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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  ll N;
  cin >> N;
  isPrime(N) ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}

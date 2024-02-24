#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int Limit = 1e8;

ll memo[Limit];

ll fib(ll n) {
  if (n == 0 || n == 1) {
    return n;
  }

  if (memo[n] != -1) {
    return memo[n];
  }

  ll ans = fib(n - 1) + fib(n - 2);
  memo[n] = ans;
  return ans;
}

int main() {
  // Write your code here
  memset(memo, -1, sizeof(memo));
  int n;
  cin >> n;
  cout << fib(n) << endl;

  return 0;
}

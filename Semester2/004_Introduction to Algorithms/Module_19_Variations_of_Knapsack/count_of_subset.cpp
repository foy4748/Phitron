#include <bits/stdc++.h>
#define ll long long
using namespace std;

int N, S;
const int Limit = 1005;

ll memo[Limit][Limit];

int main() {
  // Write your code here
  cin >> N >> S;
  vector<ll> inputs;
  for (int i = 0; i < N; i++) {
    ll x;
    cin >> x;
    inputs.push_back(x);
  }

  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= S; j++) {
      memo[i][j] = 0;
    }
  }
  memo[0][0] = 1;
  for (int i = 1; i <= N; i++)
    memo[i][0] = 1;
  for (int i = 1; i <= S; i++)
    memo[0][i] = 0;

  for (int i = 1; i <= N; i++) {
    for (int j = 0; j <= S; j++) {
      if (inputs[i - 1] <= j) {
        ll opt1 = memo[i - 1][j - inputs[i - 1]];
        ll opt2 = memo[i - 1][j];
        memo[i][j] = opt1 + opt2;
      } else {
        ll opt2 = memo[i - 1][j];
        memo[i][j] = opt2;
      }
    }
  }
  memo[N][S] ? cout << memo[N][S] << endl : cout << "NO" << endl;
  return 0;
}

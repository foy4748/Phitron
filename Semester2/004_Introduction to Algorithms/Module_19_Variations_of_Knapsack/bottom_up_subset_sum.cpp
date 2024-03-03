#include <bits/stdc++.h>
#define ll long long
using namespace std;

int N, S;
const int Limit = 1005;

bool memo[Limit][Limit];

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
      memo[i][j] = false;
    }
  }
  memo[0][0] = true;
  for (int i = 1; i <= N; i++)
    memo[i][0] = true;
  for (int i = 1; i <= S; i++)
    memo[0][i] = false;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= S; j++) {
      if (inputs[i - 1] <= j) {
        bool opt1 = memo[i - 1][j - inputs[i - 1]];
        bool opt2 = memo[i - 1][j];
        memo[i][j] = opt1 || opt2;
      } else {
        bool opt2 = memo[i - 1][j];
        memo[i][j] = opt2;
      }
    }
  }
  memo[N][S] ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}

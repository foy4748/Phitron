#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int Limit = 10000;
ll memo[Limit][Limit];

ll knapSack(int n, ll values[], ll weights[], ll W) {
  if (n < 0 || W == 0) {
    return 0;
  }
  if (memo[n][W] != -1) {
    return memo[n][W];
  }
  if (weights[n] <= W) {
    ll opt1 = knapSack(n - 1, values, weights, W - weights[n]) + values[n];
    ll opt2 = knapSack(n - 1, values, weights, W);

    ll result = max(opt1, opt2);
    memo[n][W] = result;
    return memo[n][W];
  } else {
    ll opt2 = knapSack(n - 1, values, weights, W);
    memo[n][W] = opt2;
    return opt2;
  }
}

int main() {
  // Write your code here

  ll n, w;
  cin >> n >> w;
  ll valueArr[n], weightArr[n];
  for (int i = 0; i < n; i++) {
    ll v_i, w_i;
    cin >> w_i >> v_i;
    valueArr[i] = v_i;
    weightArr[i] = w_i;
  }

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= w; j++) {
      memo[i][j] = -1;
    }
  }

  cout << knapSack(n - 1, valueArr, weightArr, w) << endl;

  return 0;
}

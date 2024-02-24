#include <bits/stdc++.h>

using namespace std;
const int Limit = 1010;
int memo[Limit][Limit];

int knapSack(int n, int values[], int weights[], int W) {
  if (n < 0 || W == 0) {
    return 0;
  }
  if (memo[n][W] != -1) {
    return memo[n][W];
  }
  if (weights[n] <= W) {
    int opt1 = knapSack(n - 1, values, weights, W - weights[n]) + values[n];
    int opt2 = knapSack(n - 1, values, weights, W);

    int result = max(opt1, opt2);
    memo[n][W] = result;
    return memo[n][W];
  } else {
    int opt2 = knapSack(n - 1, values, weights, W);
    memo[n][W] = opt2;
    return opt2;
  }
}

int main() {
  // Write your code here

  int n, w;
  cin >> n >> w;
  int valueArr[n], weightArr[n];
  for (int i = 0; i < n; i++) {
    int v_i, w_i;
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

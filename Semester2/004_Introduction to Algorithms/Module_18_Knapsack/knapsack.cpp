#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll knapSack(int n, ll values[], ll weights[], ll W) {
  if (n < 0 || W == 0) {
    return 0;
  }
  if (weights[n] <= W) {
    ll opt1 = knapSack(n - 1, values, weights, W - weights[n]) + values[n];
    ll opt2 = knapSack(n - 1, values, weights, W);

    return max(opt1, opt2);
  } else {
    ll opt2 = knapSack(n - 1, values, weights, W);
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

  cout << knapSack(n - 1, valueArr, weightArr, w) << endl;

  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int dp[10005];

bool unbound_knapSack(int target, int A, int B) {
  if (target == 0)
    return true;
  else if (target < 0)
    return false;

  if (dp[target] != -1)
    return dp[target];

  bool opt1 = unbound_knapSack(target - A, A, B);
  bool opt2 = unbound_knapSack(target - B, A, B);

  bool result = opt1 || opt2;
  dp[target] = result ? 1 : 0;
  return result;
}

int main() {
  // Write your code here
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 0; i <= c; i++) {
    dp[i] = -1;
  }
  unbound_knapSack(c, a, b) ? cout << "Yes"
                                   << "\n"
                            : cout << "No"
                                   << "\n";

  return 0;
}

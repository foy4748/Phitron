#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

int score(int x, int y, int size) {
  int score = 1;
  for (int i = 0; i < 10; i++) {
    bool logic = x == i || y == i || x == (size - 1) - i || y == (size - 1);
    if (logic)
      return 1;
    else
      return 0;
  }
}

void solve() {
  // Write your code here
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  /* int T; cin>>T; */
  /* while(T--) */
  solve();
  return 0;
}

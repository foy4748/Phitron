#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    int first, first_ability;
    cin >> first >> first_ability;
    int ans = first;
    vector<pair<int, int>> v(N - 1);
    for (int i = 0; i < N - 1; i++) {
      int weight, ability;
      cin >> weight >> ability;
      v[i] = {weight, ability};
    }

    for (auto it : v) {
      if (it.first >= first && it.second >= first_ability)
        ans = -1;
    }
    cout << ans << '\n';
  }
  return 0;
}

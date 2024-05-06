#include <bits/stdc++.h>
#include <climits>
#define endl "\n"
#define ll long long int

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
    set<char> st;
    vector<char> arr(N);
    for (int i = 0; i < N; i++) {
      char x;
      cin >> x;
      arr[i] = x;
      st.insert(x);
    }

    vector<ll> ans(26, LONG_LONG_MAX);
    for (auto &currentChar : st) {
      int l = 0;
      int r = N - 1;
      ll deletedChars = 0;
      while (l < r) {
        if (arr[r] == arr[l]) {
          l++;
          r--;
        } else {
          if (arr[l] == currentChar) {
            l++;
            deletedChars++;
          } else if (arr[r] == currentChar) {
            r--;
            deletedChars++;
          } else {
            deletedChars = -1;
            break;
          }
        }
      }
      if (deletedChars != -1) {
        ans[currentChar - 'a'] = deletedChars;
      } else {
        ans[currentChar - 'a'] = LONG_LONG_MAX;
      }
    }
    sort(ans.begin(), ans.end());
    if (ans[0] != LONG_LONG_MAX)
      cout << ans[0] << "\n";
    else
      cout << -1 << "\n";
  }
  return 0;
}

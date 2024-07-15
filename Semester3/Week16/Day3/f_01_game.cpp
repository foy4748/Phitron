#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

void solve() {
  // Write your code here
  string s;
  cin >> s;
  stack<char> st;
  int turns = 0;
  for (char c : s) {
    if (st.empty()) {
      st.push(c);
    } else {
      if (st.top() != c) {
        st.pop();
        turns++;
      } else {
        st.push(c);
      }
    }
  }

  turns % 2 ? cout << "DA" << '\n' : cout << "NET" << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}

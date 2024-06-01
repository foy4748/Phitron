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
    string txt;
    cin >> txt;

    stack<char> st;
    for (char c : txt) {
      if (st.empty()) {
        st.push(c);
      } else {
        if (st.top() == 'B' && c == 'B') {
          st.pop();
        } else if (st.top() == 'A' && c == 'B') {
          st.pop();
        } else {
          st.push(c);
        }
      }
    }
    cout << st.size() << '\n';
  }
  return 0;
}

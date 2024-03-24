#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

char isPair(char c) {
  if (c == ')') {
    return '(';
  } else {
    return '\0';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    stack<char> st;
    for (int i = 0; i < N; i++) {
      char X;
      cin >> X;
      if (st.empty()) {
        st.push(X);
      } else {
        if (st.top() == isPair(X)) {
          st.pop();
        } else {
          st.push(X);
        }
      }
    }
    cout << st.size() / 2 << "\n";
  }
  return 0;
}

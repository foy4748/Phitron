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
    stack<char> st;
    for (int i = 0; i < N; i++) {
      char x;
      cin >> x;
      st.push(x);
    }

    vector<char> v;

    while (!st.empty()) {
      if (st.top() != '0') {
        int charCode = st.top() - '0';
        st.pop();
        char singleChar = charCode + 'a' - 1;
        v.push_back(singleChar);
      } else {
        st.pop(); // popping the zero
        char lastDigit = st.top();
        st.pop();
        char firstDigit = st.top();
        st.pop();
        string charCodeStr = string() + firstDigit + lastDigit;
        int charCode = stoi(charCodeStr);
        char singleChar = charCode + 'a' - 1;
        v.push_back(singleChar);
      }
    }
    reverse(v.begin(), v.end());
    for (char c : v)
      cout << c;
    cout << "\n";
  }
  return 0;
}

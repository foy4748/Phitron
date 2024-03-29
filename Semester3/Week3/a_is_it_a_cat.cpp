#include <bits/stdc++.h>
#include <cctype>
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
    stack<char> st;
    int N;
    cin >> N;

    bool isMArrived = false;
    bool isEArrived = false;
    bool isOArrived = false;
    bool isWArrived = false;
    for (int i = 0; i < N; i++) {
      char x;
      cin >> x;
      x = tolower(x);
      if (x == 'm')
        isMArrived = true;
      if (x == 'e')
        isEArrived = true;
      if (x == 'o')
        isOArrived = true;
      if (x == 'w')
        isWArrived = true;

      if (st.empty()) {
        st.push(x);
      } else {

        if (st.top() == 'm' && (x == 'e' || x == 'm')) {
          st.pop();
          st.push(x);
        }

        else if (st.top() == 'e' && (x == 'o' || x == 'e')) {
          st.pop();
          st.push(x);
        }

        else if (st.top() == 'o' && (x == 'w' || x == 'o')) {
          st.pop();
          st.push(x);
        }

        else if (st.top() == 'w' && x == 'w') {
          st.pop();
          st.push(x);
        } else {
          st.push(x);
        }
      }
    }
    bool isAllArived = isMArrived && isEArrived && isOArrived && isWArrived;
    st.size() == 1 && st.top() == 'w' && isAllArived ? cout << "YES"
                                                            << "\n"
                                                     : cout << "NO"
                                                            << "\n";
  }
  return 0;
}

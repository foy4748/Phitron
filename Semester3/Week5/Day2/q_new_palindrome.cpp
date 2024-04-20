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
    string s;
    cin >> s;
    set<char> st;
    int r = s.size() - 1;
    int l = 0;
    while (l < r) {
      st.insert(s[l]);
      l++;
      r--;
    }
    if (st.size() == 1)
      cout << "NO"
           << "\n";
    else
      cout << "YES"
           << "\n";
  }
  return 0;
}

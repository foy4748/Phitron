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
    string goal = "abc";
    int matched = -1;
    for (int i = 0; i < 3; i++) {
      char x;
      cin >> x;
      if (goal[i] == x)
        matched = i;
    }
    matched == -1 ? cout << "NO" << '\n' : cout << "YES" << '\n';
  }
  return 0;
}

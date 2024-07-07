#include <bits/stdc++.h>
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
    string v;
    cin >> v;
    int count[2] = {0, 0};
    for (int i = 0; i < v.size(); i++) {
      char x = v[i];
      int num = x - '0';
      count[num]++;
    }

    if (count[0] == v.size() || count[1] == v.size())
      cout << v.size() << '\n';
    else if (count[0] == count[1])
      cout << 0 << '\n';
    else {
      int i;
      for (i = 1; i <= v.size(); i++) {
        int opposite = v[i - 1] == '0' ? 1 : 0;
        if (count[opposite] >= 1) {
          count[opposite]--;
        } else {
          break;
        }
      }

      cout << v.size() - i + 1 << '\n';
    }
  }
  return 0;
}

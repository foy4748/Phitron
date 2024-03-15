#include <bits/stdc++.h>

using namespace std;

int main() {
  // Write your code here
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    int scores[] = {0, 0, 0};
    map<string, vector<int>> mp;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < N; j++) {
        string s;
        cin >> s;
        mp[s].push_back(i);
      }
    }
    for (map<string, vector<int>>::iterator it = mp.begin(); it != mp.end();
         it++) {
      string k = it->first;
      vector<int> users = it->second;
      if (users.size() == 2) {
        for (int c : users) {
          scores[c]++;
        }
      } else if (users.size() == 1) {
        for (int c : users) {
          scores[c] += 3;
        }
      }
    }
    // cout << "\n";
    for (int c : scores)
      cout << c << " ";
    cout << "\n";
  }
  return 0;
}

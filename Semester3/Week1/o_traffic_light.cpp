#include <bits/stdc++.h>

using namespace std;

int main() {
  // Write your code here
  int T;
  cin >> T;
  while (T--) {
    int N;
    char s;
    string sequence;
    cin >> N >> s >> sequence;

    if (s == 'g') {
      cout << 0 << "\n";
      continue;
    }

    vector<int> g_idx;
    for (int i = 0; i < N; i++) {

      int next_idx = (i + 1) % N;
      if (sequence[i] == 'g' && sequence[next_idx] == s) {
        g_idx.push_back(next_idx);
      }
    }

    int gurenteed_time = 0;
    for (int c : g_idx) {
      int current_time = 0;
      while (sequence[c] != 'g') {
        current_time++;
        c = (c + 1) % N;
      }
      if (current_time > gurenteed_time) {
        gurenteed_time = current_time;
      }
    }
    if (g_idx.size() == 0)
      gurenteed_time = 1;
    cout << gurenteed_time << "\n";
  }
  return 0;
}

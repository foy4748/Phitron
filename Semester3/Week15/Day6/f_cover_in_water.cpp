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
    vector<char> v(N);
    int consecutive_empty_cells = 0;
    int total_cells = 0;
    int max_consecutive_cells = 0;
    for (int i = 0; i < N; i++) {
      cin >> v[i];
      if (v[i] == '.') {
        consecutive_empty_cells++;
        max_consecutive_cells =
            max(consecutive_empty_cells, max_consecutive_cells);
        total_cells++;
      } else {
        consecutive_empty_cells = 0;
      }
    }
    if (max_consecutive_cells >= 3) {
      cout << 2 << '\n';
    } else {
      cout << total_cells << '\n';
    }
  }
  return 0;
}

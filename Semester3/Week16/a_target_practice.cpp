#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

int calculate_score(int x, int y, int size) {
  //  0 based indexing
  size = size - 1;
  int score = 1;
  for (int i = 0; i < 10; i++) {
    bool row = x == i || x == size - i;
    bool col = y == i || y == size - i;
    if (row || col) {
      score += (i % 5);
      break;
    }
  }
  return score;
}

void solve() {
  // Write your code here
  int score = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      char x;
      cin >> x;
      if (x == 'X')
        score += calculate_score(i, j, 10);
    }
  }
  cout << score << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}

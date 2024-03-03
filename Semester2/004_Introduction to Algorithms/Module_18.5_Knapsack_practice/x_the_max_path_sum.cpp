#include <bits/stdc++.h>
#define ll long long
int max_row, max_col;

using namespace std;

vector<ll> grid[1005];
vector<bool> isVisited[1005];

bool isValid(int r, int c) {
  if (r < 0 || c < 0 || r >= max_row || c >= max_col)
    return false;
  return true;
}

ll choice(int r, int c) {
  int newR = r + 1;
  int newC = c + 1;
  bool isRight = isValid(r, newC);
  bool isDown = isValid(newR, c);
  bool isDiagonal = isValid(newR, newC);

  ll optionA, optionB;
  if (isRight) {
    ll opt1 = choice(r, newC) + grid[r][c];
    ll opt2 = choice(r, newC);
    optionA = max(opt1, opt2);
  }
  if (isDown) {
    ll opt1 = choice(newR, c) + grid[r][c];
    ll opt2 = choice(newR, c);
    optionB = max(opt1, opt2);
  }
  grid[r][c] = max(optionA, optionB);
}

int main() {
  // Write your code here
  cin >> max_row >> max_col;
  for (int i = 0; i < max_row; i++) {
    for (int j = 0; j < max_col; j++) {
      ll x;
      cin >> x;
      grid[i].push_back(x);
    }
  }
  for (int i = 0; i < max_row; i++) {
    for (int j = 0; j < max_col; j++) {
      isVisited[i].push_back(false);
    }
  }
  isVisited[0][0] = true;
  choice(0, 0);
  for (int i = 0; i < max_row; i++) {
    for (int j = 0; j < max_col; j++) {
      cout << grid[i][j] << " ";
    }
    cout << endl;
  }

  cout << grid[max_row - 1][max_col - 1] << endl;

  return 0;
}

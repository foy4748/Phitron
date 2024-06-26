#include <bits/stdc++.h>
#include <cstring>
#define endl "\n"
//#define ll long long int

using namespace std;

bool isFound = false;
int max_r, max_c;
int Ar, Ac, Br, Bc;
const int Limit = 1001;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
bool isVisited[Limit][Limit];
int grid[Limit][Limit];

bool isValid(int r, int c) {
  if (r < 0 || c < 0 || r >= max_r || c >= max_c)
    return false;
  return true;
}

bool isEvaporated(int cr, int cc, int lsr, int lsc, int d) {
  int X = abs(cr - lsr);
  int Y = abs(cc - lsc);
  int distance = X + Y;
  return distance < d;
}

void bfs(int lsr, int lsc, int d) {
  queue<pair<int, int>> q;
  int sr = 0;
  int sc = 0;
  isVisited[0][0] = true;
  grid[0][0] = 0;
  q.push({sr, sc});

  while (!q.empty()) {
    pair<int, int> p = q.front();
    q.pop();
    int pr = p.first;
    int pc = p.second;

    for (int i = 0; i < 4; i++) {
      int nr = pr + dx[i];
      int nc = pc + dy[i];
      if (isValid(nr, nc) && !isVisited[nr][nc] &&
          !isEvaporated(nr, nc, lsr, lsc, d)) {
        isVisited[nr][nc] = true;
        grid[nr][nc] = grid[pr][pc] + 1;
        q.push({nr, nc});
      }
    }
  }
}

int main() {
  // Write your code here
  int T;
  cin >> T;
  while (T--) {
    cin >> max_r >> max_c;
    for (int i = 0; i < max_r; i++) {
      for (int j = 0; j < max_r; j++) {
        grid[i][j] = 0;
        isVisited[i][j] = false;
      }
    }
    int lsr, lsc, d;
    cin >> lsr >> lsc;
    cin >> d;

    grid[max_r - 1][max_c - 1] = -1;
    if (!isEvaporated(max_r - 1, max_c - 1, lsr - 1, lsc - 1, d))
      bfs(lsr - 1, lsc - 1, d);

    cout << grid[max_r - 1][max_c - 1] << '\n';
  }

  return 0;
}

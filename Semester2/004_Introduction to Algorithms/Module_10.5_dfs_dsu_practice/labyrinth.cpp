#include <bits/stdc++.h>

using namespace std;

bool isFound = false;
int max_r, max_c;
int Ar, Ac, Br, Bc;
const int Limit = 1005;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
// char d[] = {'U', 'D', 'R', 'L'};
char d[] = {'R', 'L', 'D', 'U'};
bool isVisited[Limit][Limit];
char grid[Limit][Limit];
int level[Limit][Limit];
char direction[Limit][Limit];
pair<int, int> parent[Limit][Limit];

bool isValid(int r, int c) {
  if (r < 1 || c < 1 || r > max_r || c > max_c)
    return false;
  return true;
}

void bfs(int sr, int sc) {
  queue<pair<int, int>> q;
  level[sr][sc] = 0;
  isVisited[sr][sc] = true;
  parent[sr][sc] = {sr, sc};
  q.push({sr, sc});

  while (!q.empty()) {
    pair<int, int> p = q.front();
    q.pop();
    int pr = p.first;
    int pc = p.second;

    if (grid[pr][pc] == 'B') {
      isFound = true;
    }

    for (int i = 0; i < 4; i++) {
      int nr = pr + dx[i];
      int nc = pc + dy[i];

      if (isValid(nr, nc) && !isVisited[nr][nc] && grid[nr][nc] != '#') {
        isVisited[nr][nc] = true;
        direction[nr][nc] = d[i];
        parent[nr][nc] = {pr, pc};
        level[nr][nc] = level[pr][pc] + 1;
        q.push({nr, nc});
      }
    }
  }
}

int main() {
  // Write your code here
  memset(isVisited, false, sizeof(isVisited));
  memset(level, 0, sizeof(level));
  cin >> max_r >> max_c;
  for (int i = 1; i <= max_r; i++) {
    for (int j = 1; j <= max_c; j++) {
      cin >> grid[i][j];
      if (grid[i][j] == 'A') {
        Ar = i;
        Ac = j;
      }
      if (grid[i][j] == 'B') {
        Br = i;
        Bc = j;
      }
    }
  }

  bfs(Ar, Ac);
  if (isFound) {
    cout << "YES" << endl;
    int levels = level[Br][Bc];
    cout << levels << endl;

    cout << endl;
    for (int i = 1; i <= max_r; i++) {
      for (int j = 1; j <= max_c; j++) {
        cout << grid[i][j];
      }
      cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= max_r; i++) {
      for (int j = 1; j <= max_c; j++) {
        cout << direction[i][j];
      }
      cout << endl;
    }

  } else {
    cout << "NO" << endl;
  }

  return 0;
}

#include <bits/stdc++.h>

using namespace std;

const int max_size = 1005;

char input_field[max_size][max_size];
bool isVisited[max_size][max_size];
// Go						Right    Left     Up       Down
vector<pair<int, int>> dv = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

//			 Row    Col	   RowSize ColSize
bool isValid(int r, int c, int rs, int cs) {
  if (r < 0 || r >= rs || c < 0 || c >= cs)
    return false;
  return true;
}

void dfs(int sr, int sc, int N, int M, int &count) {
  // cout << sr << " " << sc << endl;
  isVisited[sr][sc] = true;
  count++;
  for (int i = 0; i < 4; i++) {
    int nr = sr + dv[i].first;
    int nc = sc + dv[i].second;
    if (isValid(nr, nc, N, M) == true && isVisited[nr][nc] == false &&
        input_field[nr][nc] != '#') {
      dfs(nr, nc, N, M, count);
    }
  }
}

int main() {
  // Write your code here
  int N, M;
  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> input_field[i][j];
    }
  }

  memset(isVisited, false, sizeof(isVisited));
  vector<pair<int, int>> parents;

  vector<int> counts;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (input_field[i][j] != '#' && isVisited[i][j] == false) {
        int count = 0;
        dfs(i, j, N, M, count);
        counts.push_back(count);
      }
    }
  }

  sort(counts.begin(), counts.end());

  for (int c : counts) {
    cout << c << " ";
  }

  if (counts.size() == 0) {
    cout << 0 << " ";
  }
  cout << endl;
  return 0;
}

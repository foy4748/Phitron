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

bool isFound = false;

void dfs(int sr, int sc, int N, int M) {
  // cout << sr << " " << sc << endl;
  if (input_field[sr][sc] == 'B') {
    isFound = true;
  }

  isVisited[sr][sc] = true;
  for (int i = 0; i < 4; i++) {
    int nr = sr + dv[i].first;
    int nc = sc + dv[i].second;
    if (isValid(nr, nc, N, M) == true && isVisited[nr][nc] == false &&
        input_field[nr][nc] != '#') {

      dfs(nr, nc, N, M);
    }
  }
}
int main() {
  // Write your code here
  int N, M;
  int A_r, A_c;
  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> input_field[i][j];
      if (input_field[i][j] == 'A') {
        A_r = i;
        A_c = j;
      }
    }
  }
  memset(isVisited, false, sizeof(isVisited));

  dfs(A_r, A_c, N, M);

  if (isFound) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}

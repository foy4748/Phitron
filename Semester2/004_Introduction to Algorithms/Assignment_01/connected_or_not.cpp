#include <bits/stdc++.h>
#include <functional>

using namespace std;

const int max_size = 1005;

int adjacent_matrix[max_size][max_size];

int main() {
  // Write your code here
  memset(adjacent_matrix, 0, sizeof(adjacent_matrix));
  int N, E;
  cin >> N >> E;
  while (E--) {
    int i, j;
    cin >> i >> j;
    adjacent_matrix[i][j] = 1;
  }

  int Q;
  cin >> Q;
  while (Q--) {
    int i, j;
    cin >> i >> j;
    if (adjacent_matrix[i][j] == 1 || i == j) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}

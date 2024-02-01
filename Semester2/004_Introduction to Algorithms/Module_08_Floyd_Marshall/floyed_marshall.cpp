#include <bits/stdc++.h>

using namespace std;

int main() {
  // Write your code here
  int n, e;
  cin >> n >> e;

  int adjacent_matrix[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        adjacent_matrix[i][j] = 0;
      } else {
        adjacent_matrix[i][j] = INT_MAX;
      }
    }
  }

  while (e--) {
    int n1, n2, w;
    cin >> n1 >> n2 >> w;
    adjacent_matrix[n1][n2] = w;
    // adjacent_matrix[n2][n1] = w;
  }

  int k = 0;
  for (int i = 0; i < n; i++) {
    cout << k << endl;
    for (int j = 0; j < n; j++) {
      bool flag = true;
      // Skipping self nodes
      // Or
      // Skipping obsolete node
      // between
      // For example
      // 0 1 1
      // 0 0 1
      // etc.
      if (i == j || i == k || j == k) {
        flag = false;
      }

      if (flag) {

        cout << "HIT" << endl;
        // Do your magic here
        cout << i << " " << k << " " << j << endl;

        if (adjacent_matrix[i][k] < INT_MAX &&
            adjacent_matrix[k][j] < INT_MAX &&
            adjacent_matrix[i][k] + adjacent_matrix[k][j] <
                adjacent_matrix[i][j]) {
          adjacent_matrix[i][j] = adjacent_matrix[i][k] + adjacent_matrix[k][j];
        }
      }
    }
    k++;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (adjacent_matrix[i][j] != INT_MAX) {
        cout << adjacent_matrix[i][j] << "\t";

      } else {
        cout << "."
             << "\t";
      }
    }
    cout << endl;
  }
  return 0;
}

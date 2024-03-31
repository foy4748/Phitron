#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int N, M;

bool isValid(int r, int c) {
  if (r < 0 || r >= N || c < 0 || c >= M)
    return false;
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {
    cin >> N >> M;
    int grid[N][M];
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        cin >> grid[i][j];
      }
    }

    ll max_sum = 0;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        ll sum = 0;
        int tempR, tempC;

        // Going UP-LEFT
        tempR = i;
        tempC = j;

        while (isValid(tempR, tempC)) {
          if (tempR == i && tempC == j) {
            tempR--;
            tempC--;
          };
          if (isValid(tempR, tempC))
            sum += grid[tempR][tempC];
          tempR--;
          tempC--;
        }

        // Going UP-RIGHT
        tempR = i;
        tempC = j;

        while (isValid(tempR, tempC)) {
          if (tempR == i && tempC == j) {
            tempR--;
            tempC++;
          };
          if (isValid(tempR, tempC))
            sum += grid[tempR][tempC];
          tempR--;
          tempC++;
        }

        // Going DOWN-LEFT
        tempR = i;
        tempC = j;

        while (isValid(tempR, tempC)) {
          if (tempR == i && tempC == j) {
            tempR++;
            tempC--;
          };
          if (isValid(tempR, tempC))
            sum += grid[tempR][tempC];
          tempR++;
          tempC--;
        }

        // Going DOWN-RIGHT
        tempR = i;
        tempC = j;

        while (isValid(tempR, tempC)) {
          if (tempR == i && tempC == j) {
            tempR++;
            tempC++;
          };
          if (isValid(tempR, tempC))
            sum += grid[tempR][tempC];
          tempR++;
          tempC++;
        }

        sum += grid[i][j];
        // cout << grid[i][j] << " ";
        // cout << sum << " ";
        max_sum = max(sum, max_sum);
      }
      // cout << "\n";
    }
    cout << max_sum << "\n";
  }
  return 0;
}

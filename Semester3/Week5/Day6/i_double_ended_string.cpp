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
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    int arr[n + 1][m + 1];
    memset(arr, 0, sizeof(arr));

    int maxCount = 0;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        if (a[i - 1] == b[j - 1]) {
          arr[i][j] = arr[i - 1][j - 1] + 1;
          maxCount = max(maxCount, arr[i][j]);
        }
      }
    }

    cout << (n - maxCount) + (m - maxCount) << "\n";
  }
  return 0;
}

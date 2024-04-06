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
    int N;
    cin >> N;
    int K;
    cin >> K;
    int arr[N];
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < N - K + 1; i++) {
      int bits[25] = {0};
      for (int j = i; j < i + K; j++) {
        // cout << arr[j] << " ";
        int num = arr[j];
        int idx = 0;
        while (num > 0) {
          bits[idx] = (num % 2) || bits[idx];
          num /= 2;
          idx++;
        }

        /* for (int c : bits) */
        /*   cout << c << " "; */
        /* cout << "\n"; */
      }
      int ans = 0;
      for (int x = 0; x < 25; x++) {
        ans += (bits[i] << x);
      }
      cout << ans << " ";
      cout << "\n";
    }
  }
  return 0;
}

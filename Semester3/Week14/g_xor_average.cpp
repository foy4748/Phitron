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
    if (N % 2) {
      for (int i = 0; i < N; i++)
        cout << 1 << ' ';
      cout << '\n';
    } else {
      for (int i = 0; i < N - 2; i++) {
        cout << 2 << ' ';
      }
      cout << 1 << ' ' << 3 << '\n';
    }
  }
  return 0;
}

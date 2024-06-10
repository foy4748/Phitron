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
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
      cin >> v[i];
    }
    if (!(N % 2)) {
      cout << 2 << '\n';
      cout << 1 << ' ' << N << '\n';
      cout << 1 << ' ' << N << '\n';
    } else {
      cout << 4 << '\n';
      cout << 1 << ' ' << (N - 1) << '\n';
      cout << 1 << ' ' << (N - 1) << '\n';
      cout << (N - 1) << ' ' << N << '\n';
      cout << (N - 1) << ' ' << N << '\n';
    }
  }
  return 0;
}

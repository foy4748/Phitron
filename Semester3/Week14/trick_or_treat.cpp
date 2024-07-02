#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {
    int N, M;
    cin >> N >> M;
    map<int, int> mp;
    vector<int> arrA(N);
    vector<int> arrB(N);
    ll count = 0;
    for (int i = 0; i < N; i++) {
      cin >> arrA[i];
      mp[arrA[i] % M]++;
    }
    for (int i = 0; i < N; i++) {
      cin >> arrB[i];
      int Y = arrB[i] % M;
      int X = (M - Y) % M;

      count += mp[X];
    }

    cout << count << '\n';
  }
  return 0;
}

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
    map<int, int> mp;
    queue<int> q;
    int arr[N];
    int count = 0;
    for (int i = 0; i < N; i++) {
      int X;
      cin >> X;
      q.push(X);
      mp[X]++;
      arr[i] = X;
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
      int elem = arr[i];
      if (mp[elem] > 1) {
        mp[elem]--;
        ans = i + 1;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}

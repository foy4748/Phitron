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
    int N, K;
    cin >> N >> K;
    int arr[N];
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }
    int ans = -1;

    for (int i = 0; i < N; i++) {
      if ((arr[i] & K) == K) {
        ans &= arr[i];
      }
    }
    if (ans == K) {
      cout << "YES"
           << "\n";
    } else {
      cout << "NO"
           << "\n";
    }
  }
  return 0;
}

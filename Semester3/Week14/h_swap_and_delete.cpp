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
    int N;
    cin >> N;
    ll count[2] = {0, 0};
    for (int i = 0; i < N; i++) {
      char x;
      cin >> x;
      int num = x - '0';
      count[num]++;
    }
  }
  return 0;
}

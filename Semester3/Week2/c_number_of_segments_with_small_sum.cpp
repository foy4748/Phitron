// !! Important
// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  int N;
  ll S;
  cin >> N >> S;
  ll arr[N];
  for (int i = 0; i < N; i++)
    cin >> arr[i];

  int l = 0, r = 0;
  ll sum = 0;
  ll ans = 0;

  while (r < N) {
    sum += arr[r];
    if (sum <= S) {
      // ans = max(ans, r - l + 1);
      ans += (r - l + 1);
    } else {
      while (sum > S && l < r) {
        sum -= arr[l];
        l++;
      }
      if (sum <= S) {
        ans += (r - l + 1);
      }
    }
    r++;
  }

  cout << ans << endl;

  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}

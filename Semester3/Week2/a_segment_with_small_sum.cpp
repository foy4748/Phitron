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
  int ans = 0;

  while (r < N) {
    sum += arr[r];
    if (sum <= S) {
      ans = max(ans, r - l + 1);
    } else {
      sum -= arr[l];
      l++;
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

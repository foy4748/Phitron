#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  int N;
  cin >> N;
  vector<pair<ll, int>> v(N);
  for (int i = 0; i < N; i++) {
    ll x;
    int idx;
    cin >> x >> idx;
    v[i] = {x, idx};
  }
  sort(v.begin(), v.end());

  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}

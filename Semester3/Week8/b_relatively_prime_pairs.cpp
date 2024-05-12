#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  ll l, r;
  cin >> l >> r;
  cout << "YES" << endl;
  for (ll i = l; i < r + 1; i += 2)
    cout << i << ' ' << i + 1 << endl;
  return 0;

  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}

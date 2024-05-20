#include <bits/stdc++.h>
#include <set>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  int N, M;
  cin >> N >> M;
  multiset<ll> st;
  for (int i = 0; i < N; i++) {
    ll x;
    cin >> x;
    st.insert(x);
  }

  for (int i = 0; i < M; i++) {
    ll x;
    cin >> x;
    auto it = st.upper_bound(x);
    if (it == st.begin()) {
      cout << -1 << '\n';
      continue;
    } else {
      cout << *(--it) << '\n';
      st.erase(it);
    }
  }

  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}

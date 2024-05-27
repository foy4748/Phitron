#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;
// Header files, namespaces,
// macros as defined above
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<int, null_type, less_equal<int>, rb_tree_tag,
                         tree_order_statistics_node_update>;

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  int N, M;
  ordered_set<ll> st;
  cin >> N;
  cin >> M;
  for (int i = 0; i < N; i++) {
    ll x;
    cin >> x;
    st.insert(x);
  }

  for (int i = 0; i < M; i++) {
    ll x;
    cin >> x;
    cout << st.order_of_key(x + 1) << " ";
  }
  cout << '\n';

  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}

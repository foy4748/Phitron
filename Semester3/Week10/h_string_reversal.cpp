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
using ordered_set = tree<int, null_type, less<int>, rb_tree_tag,
                         tree_order_statistics_node_update>;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  ordered_set<int> st;
  vector<vector<int>> v(26);
  map<int, int> mp;
  int N;
  string s;
  cin >> N >> s;
  for (int i = 0; i < N; i++) {
    char x = s[i];
    v[x - 'a'].push_back(i);
  }
  reverse(s.begin(), s.end());
  ll ans = 0;
  for (int i = 0; i < N; i++) {
    int x = s[i] - 'a';
    int currentCharIdx = v[x][mp[x]++];
    st.insert(currentCharIdx);
    int compare = st.order_of_key(currentCharIdx);
    currentCharIdx -= compare;
    ans += currentCharIdx;
  }
  cout << ans << '\n';

  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}

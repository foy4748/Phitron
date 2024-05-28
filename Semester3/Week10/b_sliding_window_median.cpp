#include <bits/stdc++.h>
#define endl "\n"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
//#define ll long long int
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  int N, K;
  cin >> N >> K;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  int L = 0, R = 0;
  ordered_set<pair<int, int>> P;
  while (R < N) {
    P.insert({a[R], R});
    if (R - L + 1 == K) {
      int pos = K / 2;
      if (K % 2 == 0) {
        pos--;
      }
      auto it = P.find_by_order(pos);
      cout << it->first << " ";
      P.erase({a[L], L});
      L++;
    }
    R++;
  }
  cout << '\n';

  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}

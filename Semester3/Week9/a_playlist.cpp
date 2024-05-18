#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  int N;
  cin >> N;
  vector<int> A(N);
  set<int> st;
  int ans = 0;
  int startIdx = 0;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++) {
    while (st.count(A[i])) {
      st.erase(A[startIdx]);
      startIdx++;
    }
    st.insert(A[i]);
    ans = max(ans, (int)st.size());
  }
  cout << ans << "\n";
  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}

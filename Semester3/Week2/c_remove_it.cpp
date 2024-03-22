#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  int N, X;
  cin >> N >> X;
  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    if (x != X)
      cout << x << " ";
  }
  cout << "\n";

  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}

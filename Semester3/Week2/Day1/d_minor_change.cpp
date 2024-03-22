#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  string S, T;
  cin >> S >> T;

  int s = T.size();
  int count = 0;

  for (int i = 0; i < s; i++) {
    if (T[i] != S[i])
      count++;
  }

  cout << count << "\n";

  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}

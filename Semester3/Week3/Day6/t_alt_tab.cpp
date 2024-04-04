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
  map<string, int> st;
  vector<string> v;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    v.push_back(s);
  }
  reverse(v.begin(), v.end());
  vector<string> result;
  for (string c : v) {
    if (st[c] == 0) {
      st[c]++;
      result.push_back(c);
    }
  }

  for (string c : result)
    cout << c << " ";
  cout << "\n";

  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}

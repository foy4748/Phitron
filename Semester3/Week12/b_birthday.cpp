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
  vector<int> v(N);
  list<int> result;
  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int idx = N;
  bool toggler = true;
  while (idx--) {
    if (toggler) {
      result.push_back(v[idx]);
      toggler = false;
    } else {
      result.push_front(v[idx]);
      toggler = true;
    }
  }
  for (auto c : result) {
    cout << c << " ";
  }
  cout << '\n';

  return 0;
}

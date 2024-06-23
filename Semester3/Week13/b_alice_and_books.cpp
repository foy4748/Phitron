#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
  if (a.first > b.first) {
    if (a.second > b.second)
      return true;
    else
      return false;
  } else
    return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    ll max_sum = -1;
    vector<int> v(N - 1);
    for (int i = 0; i < N - 1; i++) {
      cin >> v[i];
    }
    int lastElem;
    cin >> lastElem;
    sort(v.begin(), v.end());
    cout << lastElem + v[N - 2] << '\n';
  }
  return 0;
}

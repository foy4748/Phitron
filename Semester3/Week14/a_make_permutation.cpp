#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    bool isPossible = true;
    vector<int> v(N);
    vector<int> counter(101);
    for (int i = 0; i < N; i++) {
      cin >> v[i];
      counter[v[i]]++;
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++) {
      if (v[i] > i + 1)
        isPossible = false;
    }

    isPossible ? cout << "YES" << '\n' : cout << "NO" << '\n';
  }
  return 0;
}

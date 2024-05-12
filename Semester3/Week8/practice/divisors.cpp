#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int N;
  cin >> N;
  vector<ll> result;
  for (int i = 2; i * i <= N; i++) {
    if (N % i == 0) {
      result.push_back(i);
      if (N / i != i) {
        result.push_back(N / i);
      }
    }
  }
  sort(result.begin(), result.end());
  for (ll c : result)
    cout << c << " ";
  cout << '\n';
  return 0;
}

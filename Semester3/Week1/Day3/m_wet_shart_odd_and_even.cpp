#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
  // Write your code here
  int N;
  cin >> N;
  vector<ll> odd_arr;
  vector<ll> even_arr;
  if (N == 0) {
    cout << 0 << "\n";
    return 0;
  }

  for (int i = 0; i < N; i++) {
    ll x;
    cin >> x;
    if (x % 2 == 0) {
      even_arr.push_back(x);
    } else {
      odd_arr.push_back(x);
    }
  }

  sort(odd_arr.begin(), odd_arr.end());

  int start_idx = 0;
  if (odd_arr.size() % 2 == 1) {
    start_idx = 1;
  }

  ll max_sum = 0;
  for (ll c : even_arr)
    max_sum += c;
  for (int i = start_idx; i < odd_arr.size(); i++)
    max_sum += odd_arr[i];

  cout << max_sum << "\n";
  return 0;
}

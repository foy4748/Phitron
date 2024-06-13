#include <bits/stdc++.h>
#include <climits>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {
    int N, K;
    cin >> N >> K;
    vector<ll> v(N);
    for (int i = 0; i < N; i++) {
      cin >> v[i];
    }
    ll sum = 0;
    vector<ll> storage;
    for (int i = 0; i < N - 1; i++) {
      ll current = abs(v[i] - v[i + 1]);
      sum += current;
      storage.push_back(current);
    }
    ll max_sum = sum;
    ll temp = sum;
    // Using K
    for (int i = 0; i < N - 1; i++) {
      if (i == 0) {
        ll current = abs(K - v[i + 1]);
        temp -= storage[i];
        temp += current;
        max_sum = max(temp, max_sum);
        temp = sum;
      } else {
        ll current1 = abs(K - v[i - 1]);
        ll current2 = abs(K - v[i + 1]);
        temp -= storage[i];
        temp -= storage[i - 1];
        temp += current1;
        temp += current2;
        max_sum = max(temp, max_sum);
        temp = sum;
      }
    }
    if (N > 1) {
      ll current_end = abs(K - v[N - 2]);
      temp -= storage[storage.size() - 1];
      temp += current_end;
      max_sum = max(temp, max_sum);
      temp = sum;
    }

    // Using 1
    for (int i = 0; i < N - 1; i++) {
      if (i == 0) {
        ll current = abs(1 - v[i + 1]);
        temp -= storage[i];
        temp += current;
        max_sum = max(temp, max_sum);
        temp = sum;
      } else {
        ll current1 = abs(1 - v[i - 1]);
        ll current2 = abs(1 - v[i + 1]);
        temp -= storage[i];
        temp -= storage[i - 1];
        temp += current1;
        temp += current2;
        max_sum = max(temp, max_sum);
        temp = sum;
      }
    }
    if (N > 1) {
      ll current_end = abs(1 - v[N - 2]);
      temp -= storage[storage.size() - 1];
      temp += current_end;
      max_sum = max(temp, max_sum);
      temp = sum;
    }

    cout << max_sum << '\n';
  }
  return 0;
}

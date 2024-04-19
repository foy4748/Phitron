#include <bits/stdc++.h>
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
    int N;
    cin >> N;
    ll arr[N];
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    for (int i = 1; i < N; i++) {
      int a = arr[i - 1];
      int b = arr[i];

      int sum1 = a + b;
      int sum2 = (ll)(-1) * a + (ll)(-1) * b;
      if (sum2 > sum1) {
        arr[i - 1] = (ll)(-1) * a;
        arr[i] = (ll)(-1) * b;
      }
    }
    /* for (int c : arr) */
    /*   cout << c << " "; */
    /* cout << "\n"; */
    ll sum = 0;
    for (int i = 0; i < N; i++)
      sum += arr[i];
    cout << sum << "\n";
  }
  return 0;
}

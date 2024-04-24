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
    int N, K;
    cin >> N >> K;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
      arr[i] += (i + 1);
    }
    sort(arr.begin(), arr.end());
    ll sum = 0;
    int count = 0;
    for (int i = 0; i < N; i++) {
      if (sum + arr[i] <= K) {
        sum += arr[i];
        count++;
      } else {
        break;
      }
    }
    cout << count << "\n";
  }
  return 0;
}

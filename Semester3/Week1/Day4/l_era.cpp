#include <bits/stdc++.h>

using namespace std;

int main() {
  // Write your code here
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    long long int arr[N];
    for (int i = 0; i < N; i++)
      cin >> arr[i];

    long long int k = 0;
    for (int i = 0; i < N; i++) {
      if (arr[i] > (i + 1) + k) {
        k += arr[i] - (i + 1) - k;
      }
    }
    cout << k << "\n";
  }
  return 0;
}

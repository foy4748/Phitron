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
    int K;
    cin >> K;
    int arr[N];
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < N - K + 1; i++) {
      int bits[25] = {0};
      for (int j = i; j < i + K; j++) {
        int num = arr[j];
        if (num % 2 == 1) {
          count++;
          break;
        }
      }
    }
    cout << count << "\n";
  }
  return 0;
}

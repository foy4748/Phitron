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
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    int flag = 0;
    for (int i = 1; i < N - 1; i++) {
      if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
        cout << "YES"
             << "\n";
        cout << i << " " << i + 1 << " " << i + 2 << "\n";
        flag = 1;
        break;
      }
    }
    if (!flag) {
      cout << "NO"
           << "\n";
    }
  }
  return 0;
}

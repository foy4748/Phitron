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
    int arr[N];
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }
    sort(arr, arr + N);
    reverse(arr, arr + N);

    multiset<int> ms;

    for (int i = 0; i < N; i++) {
      if (ms.empty()) {
        ms.insert(arr[i]);
      } else {

        int currentLarge = *(--ms.end());

        if (currentLarge >= arr[i]) {
          ms.erase(--ms.end());
          ms.insert((currentLarge ^ arr[i]));
        } else {
          ms.insert(arr[i]);
        }
      }
    }

    cout << ms.size() << "\n";
  }
  return 0;
}

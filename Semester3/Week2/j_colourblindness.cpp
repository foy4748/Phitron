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
    vector<char> arr1(N), arr2(N);
    for (int i = 0; i < N; i++) {
      char X;
      cin >> X;
      if (X == 'G') {
        arr1[i] = 'B';
      } else {
        arr1[i] = X;
      }
    };
    for (int i = 0; i < N; i++) {
      char X;
      cin >> X;
      if (X == 'G') {
        arr2[i] = 'B';
      } else {
        arr2[i] = X;
      }
    };
    arr1 == arr2 ? cout << "YES"
                        << "\n"
                 : cout << "NO"
                        << "\n";
  }
  return 0;
}

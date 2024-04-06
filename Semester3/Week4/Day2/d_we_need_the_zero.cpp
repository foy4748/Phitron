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
    int xor_arr[N];
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    int xor_of_all_elems = 0;
    for (int i = 0; i < N; i++) {
      xor_of_all_elems = xor_of_all_elems ^ arr[i];
    }

    for (int i = 0; i < N; i++) {
      xor_arr[i] = arr[i] ^ xor_of_all_elems;
    }

    int xor_of_xor_of_all_elems = 0;
    for (int i = 0; i < N; i++) {
      xor_of_xor_of_all_elems = xor_of_xor_of_all_elems ^ xor_arr[i];
    }

    if (xor_of_xor_of_all_elems == 0)
      cout << xor_of_all_elems << "\n";
    else
      cout << "-1"
           << "\n";
  }
  return 0;
}

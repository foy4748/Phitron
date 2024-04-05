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
    int arr[N];
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    ll bits[25] = {0};

    // Calculating Bits after bitwise sum of all elements;
    for (int i = 0; i < N; i++) {
      int num = arr[i];
      int p = 0;
      while (num > 0) {
        bits[p] += num % 2;
        num /= 2;
        p++;
      }
    }

    // Calculating XOR of all elements
    ll ans = 0;
    for (int i = 0; i < 25; i++) {
      if (bits[i] % 2 == 1)
        // Found what 1 << i do
        // https://stackoverflow.com/questions/37356886/what-does-i-1i-mean-in-c
        ans += (1 << i);
    }

    ll min_ans = ans;

    for (int i = 0; i < N; i++) {
      // Now substracting one element one by one
      // bitwise of course
      int num = arr[i];
      int p = 0;
      while (num > 0) {
        bits[p] -= num % 2;
        num /= 2;
        p++;
      }

      // ================= Now check here the minimum
      // Calculating XOR of all elements
      ll current = 0;
      for (int j = 0; j < 25; j++) {
        if (bits[j] % 2 == 1)
          // Found what 1 << i do
          // https://stackoverflow.com/questions/37356886/what-does-i-1i-mean-in-c
          current += (1 << j);
      }
      min_ans = min(current, min_ans);
      // ============================================

      // Again summing
      // the num back
      num = arr[i];
      p = 0;
      while (num > 0) {
        bits[p] += num % 2;
        num /= 2;
        p++;
      }
    }
    cout << min_ans << "\n";

    /*
for (int c : bits)
  cout << c << " ";
cout << "\n";
    */
  }
  return 0;
}

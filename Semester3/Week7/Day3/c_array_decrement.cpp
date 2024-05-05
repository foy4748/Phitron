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
    vector<ll> arrA(N);
    vector<ll> arrB(N);
    for (int i = 0; i < N; i++) {
      cin >> arrA[i];
    }
    for (int i = 0; i < N; i++) {
      cin >> arrB[i];
    }
    bool isImpossible = false;

    ll diff = -1, zeroDiff = -1;
    for (int i = 0; i < N; i++) {
      // Checking whether B as greater element than A
      if (arrA[i] < arrB[i]) {
        isImpossible = true;
        break;
      }

      if (arrB[i] == 0) {
        // Checking maximum zeroDiff
        zeroDiff = max(zeroDiff, arrA[i] - arrB[i]);
      } else {
        if (diff == -1) {
          diff = arrA[i] - arrB[i];
        } else {
          if (arrA[i] - arrB[i] != diff) {
            isImpossible = true;
            break;
          }
        }
      }
    }

    if (isImpossible) {
      cout << "NO"
           << "\n";
      continue;
    }
    (diff == -1 || zeroDiff <= diff) ? cout << "YES"
                                            << "\n"
                                     : cout << "NO"
                                            << "\n";
  }
  return 0;
}

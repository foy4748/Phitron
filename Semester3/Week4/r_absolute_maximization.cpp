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

    int AND = arr[0];
    for (int i = 1; i < N; i++) {
      if (AND != arr[i])
        AND &= arr[i];
    }

    int OR = arr[0];
    for (int i = 1; i < N; i++) {
      if (OR != arr[i])
        OR |= arr[i];
    }
    cout << OR - AND << "\n";
  }
  return 0;
}

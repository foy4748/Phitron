#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

int diff(string str1, string str2, int strSize) {
  int result = 0;
  for (int i = 0; i < strSize; i++) {
    result += abs(str1[i] - str2[i]);
  }

  return result;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {

    int N, M;
    cin >> N >> M;
    string arr[N];
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    int min_diff = INT_MAX;
    for (int i = 0; i < N - 1; i++) {
      for (int j = i + 1; j < N; j++) {
        min_diff = min(min_diff, diff(arr[i], arr[j], M));
      }
    }

    cout << min_diff << "\n";
  }
  return 0;
}

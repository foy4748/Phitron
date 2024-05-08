#include <bits/stdc++.h>
#include <climits>
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
    vector<int> diffs(N - 1);
    for (int i = 0; i < N - 1; i++) {
      int x = abs(arr[i] - arr[i + 1]);
      diffs[i] = x;
    }
    int optimal_score = INT_MAX;
    if (N >= 2) {
      optimal_score = min(optimal_score, diffs[0]);
      optimal_score = min(optimal_score, diffs[N - 2]);
    }

    for (int i = 1; i < N - 1; i++) {
      int max_diff = max(diffs[i - 1], diffs[i]);
      optimal_score = min(max_diff, optimal_score);
    }
    cout << optimal_score << "\n";
  }
  return 0;
}

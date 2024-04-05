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
    int palindrome[N];
    int contributions[N];
    int directions[N];
    // Creating Palindrome palindromeay!!
    int tempN = N;
    tempN--;
    int l = 0;
    int r = tempN;
    int palindrome_sum_max_sum = 0;
    int contribution_sum = 0;
    while (l <= r) {
      palindrome[l] = tempN;
      palindrome[r] = tempN;
      if (l != r)
        palindrome_sum_max_sum += 2 * tempN;
      else
        palindrome_sum_max_sum += tempN;
      tempN--;
      l++;
      r--;
    }
    // =================

    int mid = ceil((float)N / 2);
    vector<int> not_optimized_directions_idx;
    for (int i = 0; i < N; i++) {
      char X;
      cin >> X;
      directions[i] = X;
      if (i + 1 <= mid && X != 'R') {
        contributions[i] = i;
        contribution_sum += contributions[i];
        not_optimized_directions_idx.push_back(i);
      } else if (i + 1 > mid && X != 'L') {
        contributions[i] = N - i - 1;
        contribution_sum += contributions[i];
        not_optimized_directions_idx.push_back(i);
      } else {
        contributions[i] = palindrome[i];
        contribution_sum += contributions[i];
      }
    }

    for (int c : not_optimized_directions_idx) {
      cout << c << " ";
    }
    cout << "\n";

    int p = 1;
    int temp_contribution_sum = contribution_sum;
    for (int i = 0; i < not_optimized_directions_idx.size(); i++) {
      for (int j = 0; j < p; j++) {
        temp_contribution_sum -= contributions[not_optimized_directions_idx[j]];
        temp_contribution_sum += palindrome[not_optimized_directions_idx[j]];
      }
      cout << temp_contribution_sum << " ";
      p++;
    }
    cout << "\n";

    /*
    for (int j = 0; j < not_optimized_directions_idx.size(); j++) {
      int temp_contribution_sum = contribution_sum;
      for (int i = 0; i < j; i++) {
        temp_contribution_sum -= contributions[not_optimized_directions_idx[i]];
        temp_contribution_sum += palindrome[not_optimized_directions_idx[i]];
      }
      cout << temp_contribution_sum << " ";
    }
    cout << "\n";
    */

    /*
for (int c : contributions)
  cout << c << " ";
cout << "\n";
cout << "SUM: " << palindrome_sum_max_sum << "\n";
cout << "CSUM: " << contribution_sum << "\n";
    */
  }
  return 0;
}

#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

bool isPalindrome(vector<int> &arr, int x) {
  int l = 0;
  int r = arr.size() - 1;
  while (l <= r) {
    if (arr[l] == x)
      l++;
    else if (arr[r] == x)
      r--;
    else if (arr[l] != arr[r])
      return false;
    else {
      l++;
      r--;
    }
  }
  return true;
}

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
    for (int i = 0; i < N; i++)
      cin >> arr[i];

    if (N <= 2) {
      cout << "YES"
           << "\n";
      continue;
    }

    int l = 0;
    int r = N - 1;
    bool result = true;

    while (l < r) {
      if (arr[l] != arr[r]) {
        result = isPalindrome(arr, arr[l]) || isPalindrome(arr, arr[r]);
        break;
      }
      l++;
      r--;
    }

    result ? cout << "YES"
                  << "\n"
           : cout << "NO"
                  << "\n";
  }
  return 0;
}

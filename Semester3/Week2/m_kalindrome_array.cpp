#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

bool isPalindrome(vector<int> &arr) {
  int r = arr.size() - 1;
  int l = 0;

  bool result = true;
  while (l <= r) {
    if (arr[l] != arr[r]) {
      result = false;
      break;
    }
    l++;
    r--;
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
    int N;
    cin >> N;

    int arr[N];
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
    while (l <= r) {
      if (arr[l] != arr[r]) {
        vector<int> v1, v2;
        for (int i = 0; i < N; i++) {
          if (arr[i] != arr[l])
            v1.push_back(arr[i]);
          if (arr[i] != arr[r])
            v2.push_back(arr[i]);
        }
        result = isPalindrome(v1) || isPalindrome(v2);
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

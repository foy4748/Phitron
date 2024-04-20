#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int binarySearch(std::vector<ll> &arr, int left, int right, ll target) {
  if (right >= left) {
    int mid = left + (right - left) / 2;

    // If the element is present at the middle itself
    if (arr[mid] == target)
      return mid;

    // If element is smaller than mid, then it can only be present in left
    // subarray
    if (arr[mid] > target)
      return binarySearch(arr, left, mid - 1, target);

    // Else the element can only be present in right subarray
    return binarySearch(arr, mid + 1, right, target);
  }
  return -1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int N;
  int K;
  cin >> N >> K;
  vector<ll> arr;
  for (int i = 0; i < N; i++) {
    ll x;
    cin >> x;
    arr.push_back(x);
  }
  ll queries[K];
  for (int i = 0; i < K; i++)
    cin >> queries[i];

  for (int i = 0; i < K; i++) {
    int target = queries[i];
    int result = binarySearch(arr, 0, N - 1, target);
    if (result != -1)
      cout << "YES"
           << "\n";
    else
      cout << "NO"
           << "\n";
  }

  return 0;
}

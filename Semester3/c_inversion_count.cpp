#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

ll merge(int arr[], int L, int mid, int R) {
  long long inv = 0;
  int n1 = mid - L + 1;
  int n2 = R - mid;
  int A[n1];
  int B[n2];
  for (int i = 0; i < n1; i++) {
    A[i] = arr[L + i];
  }
  for (int i = 0; i < n2; i++) {
    B[i] = arr[mid + i + 1];
  }
  int i = 0, j = 0, k = L;
  while (i < n1 and j < n2) {
    if (A[i] <= B[j]) {
      arr[k] = A[i];
      k++;
      i++;
    } else {
      arr[k] = B[j];
      inv += n1 - i;
      k++;
      j++;
    }
  }
  while (i < n1) {
    arr[k] = A[i];
    k++;
    i++;
  }
  while (j < n2) {
    arr[k] = B[j];
    k++;
    j++;
  }
  return inv;
}

ll merge_sort(int arr[], int L, int R) {
  long long inv = 0;
  if (L < R) {
    int mid = (L + R) / 2;
    inv += merge_sort(arr, L, mid);
    inv += merge_sort(arr, mid + 1, R);
    inv += merge(arr, L, mid, R);
  }
  return inv;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    cout << merge_sort(arr, 0, n - 1) << '\n';
  }
  return 0;
}

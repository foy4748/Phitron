#include <bits/stdc++.h>

using namespace std;

int main() {
  // Write your code here
  int N, M;
  cin >> N >> M;
  int arr1[N], arr2[M], result[N + M];
  for (int i = 0; i < N; i++)
    cin >> arr1[i];
  for (int i = 0; i < M; i++)
    cin >> arr2[i];

  int i = 0, j = 0, k = 0;
  while (i != N && j != M) {
    if (arr1[i] <= arr2[j]) {
      result[k] = arr1[i];
      i++;
      k++;
    } else {
      result[k] = arr2[j];
      j++;
      k++;
    }
  }

  while (i != N) {
    result[k] = arr1[i];
    i++;
    k++;
  }

  while (j != M) {
    result[k] = arr2[j];
    j++;
    k++;
  }

  for (int c : result)
    cout << c << " ";
  cout << "\n";
  return 0;
}

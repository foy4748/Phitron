#include <bits/stdc++.h>
#include <cstring>
#include <functional>
#define endl "\n"
//#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int N;
  cin >> N;
  vector<int> arrA;
  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    arrA.push_back(x);
  }

  sort(arrA.begin(), arrA.end(), greater<int>());

  int M;
  cin >> M;
  vector<int> arrB;
  for (int i = 0; i < M; i++) {
    int x;
    cin >> x;
    arrB.push_back(x);
  }

  sort(arrB.begin(), arrB.end(), greater<int>());

  int pair_count = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (arrA[i] == arrB[j] || (arrA[i] - 1) == arrB[j] ||
          (arrA[i] + 1) == arrB[j]) {
        pair_count++;
        arrB[j] -= 2;
        break;
      }
    }
  }

  cout << pair_count << "\n";

  return 0;
}

/*
 // Not WORKING/Partially working
  if (N < M) {
    for (int i = 0; i < N; i++) {
      int currentNum = arrA[i];
      int currentNum_m1 = currentNum - 1;
      int currentNum_p1 = currentNum + 1;
      int idx1 = binarySearch(arrB, currentNum_m1);
      if (idx1 != -1 || arrBoolB[idx1] == false) {
        arrBoolA[i] = true;
        arrBoolB[idx1] = true;
        pair_count++;
      }
      int idx2 = binarySearch(arrB, currentNum_p1);
      if (idx2 != -1 || arrBoolB[idx2] == false) {
        arrBoolA[i] = true;
        arrBoolB[idx2] = true;
        pair_count++;
      }
    }
  } else {
    for (int i = 0; i < M; i++) {
      int currentNum = arrB[i];
      int idx1 = binarySearch(arrA, currentNum);
      if (idx1 != -1 || arrBoolA[idx1] == false) {
        arrBoolB[i] = true;
        arrBoolA[idx1] = true;
        pair_count++;
      }
    }
  }

 */

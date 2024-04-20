#include <bits/stdc++.h>
#include <cstring>
#define endl "\n"
//#define ll long long int

using namespace std;

int binarySearch(vector<int> &nums, int target) {
  int left = 0;
  int right = nums.size() - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (nums[mid] == target || (target - nums[mid]) == 0) {
      return mid;
    } else if (nums[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1; // target not found
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int N;
  cin >> N;
  vector<int> arrA;
  int arrBoolA[N];
  memset(arrBoolA, false, sizeof(arrBoolA));
  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    arrA.push_back(x);
  }

  sort(arrA.begin(), arrA.end());

  int M;
  cin >> M;
  vector<int> arrB;
  int arrBoolB[M];
  memset(arrBoolB, false, sizeof(arrBoolB));
  for (int i = 0; i < M; i++) {
    int x;
    cin >> x;
    arrB.push_back(x);
  }

  sort(arrB.begin(), arrB.end());

  int pair_count = 0;
  if (N < M) {
    cout << "UP"
         << "\n";
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
    cout << "DOWN"
         << "\n";
    for (int i = 0; i < M; i++) {
      int currentNum = arrB[i];
      int currentNum_m1 = currentNum - 1;
      int currentNum_p1 = currentNum + 1;
      int idx1 = binarySearch(arrA, currentNum_m1);
      if (idx1 != -1 || arrBoolA[idx1] == false) {
        arrBoolB[i] = true;
        arrBoolA[idx1] = true;
        pair_count++;
      }
      int idx2 = binarySearch(arrA, currentNum_p1);
      if (idx2 != -1 || arrBoolA[idx2] == false) {
        arrBoolB[i] = true;
        arrBoolA[idx2] = true;
        pair_count++;
      }
    }
  }
  cout << pair_count << "\n";

  return 0;
}

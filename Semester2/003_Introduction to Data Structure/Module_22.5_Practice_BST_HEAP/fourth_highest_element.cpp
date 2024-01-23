#include <bits/stdc++.h>

// CodeNinja
// https://www.codingninjas.com/studio/problems/fourth-largest-element-in-the-array_1792782

int getFourthLargest(int arr[], int n) {
  if (n < 4) {
    return -2147483648;
  }

  // Write your code here.
  priority_queue<int> pq(arr, arr + n);
  pq.pop();
  pq.pop();
  pq.pop();
  return pq.top();
}

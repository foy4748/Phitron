// LeetCode
// https://leetcode.com/problems/sort-an-array/

class Solution {
public:
  vector<int> sortedArr;
  vector<int> sortArray(vector<int> &nums) {
    priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
    while (!pq.empty()) {
      this->sortedArr.push_back(pq.top());
      pq.pop();
    }

    return this->sortedArr;
  }
};

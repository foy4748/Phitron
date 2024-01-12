// LeetCode
// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

class Solution {
public:
  int maxProduct(vector<int> &nums) {
    priority_queue<int> pq(nums.begin(), nums.end());
    int n1 = pq.top();
    pq.pop();
    int n2 = pq.top();
    return (n1 - 1) * (n2 - 1);
  }
};

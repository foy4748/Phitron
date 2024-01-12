/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

// LeetCode
// https://leetcode.com/problems/range-sum-of-bst/

class Solution {
public:
  int sum = 0;
  bool isBetween(int target, int low, int high) {
    return target >= low && target <= high;
  }

  int getRangedSumBST(TreeNode *root, int low, int high, int &sum) {
    if (!root)
      return 0;

    if (isBetween(root->val, low, high)) {
      sum += root->val;
    }

    if (root->val > low) {
      getRangedSumBST(root->left, low, high, sum);
    }
    getRangedSumBST(root->right, low, high, sum);

    return sum;
  }

  int rangeSumBST(TreeNode *root, int low, int high) {
    this->sum = 0;
    return getRangedSumBST(root, low, high, this->sum);
  }
};

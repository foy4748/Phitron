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
// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

class Solution {
public:
  TreeNode *createBST(vector<int> &nums, int l, int r) {

    if (l > r) {
      return NULL;
    }

    int m = (l + r) / 2;
    TreeNode *root = new TreeNode(nums[m]);
    TreeNode *leftSides = createBST(nums, l, m - 1);
    TreeNode *rightSides = createBST(nums, m + 1, r);
    root->left = leftSides;
    root->right = rightSides;

    return root;
  }

  TreeNode *sortedArrayToBST(vector<int> &nums) {
    TreeNode *root = this->createBST(nums, 0, nums.size() - 1);
    return root;
  }
};

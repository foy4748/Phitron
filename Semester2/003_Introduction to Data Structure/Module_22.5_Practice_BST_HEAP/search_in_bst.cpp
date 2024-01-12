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
// https://leetcode.com/problems/search-in-a-binary-search-tree/
class Solution {
public:
  TreeNode *searchBST(TreeNode *root, int val) {
    if (!root)
      return NULL;
    if (root->val == val) {
      return root;
    } else {
      TreeNode *newRoot = NULL;
      if (val < root->val) {
        newRoot = searchBST(root->left, val);
      } else if (val > root->val) {
        newRoot = searchBST(root->right, val);
      }

      return newRoot;
    }
  }
};

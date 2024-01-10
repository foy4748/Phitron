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
// https://leetcode.com/problems/univalued-binary-tree
class Solution {
public:
  bool isUnivalTree(TreeNode *root) {
    if (!root)
      return true;
    bool isLeftSame = root->left ? root->val == root->left->val : true;
    bool isRightSame = root->right ? root->val == root->right->val : true;
    bool isLeftAllSame = isUnivalTree(root->left) && isLeftSame;
    bool isRightAllSame = isUnivalTree(root->right) && isRightSame;
    return isLeftAllSame && isRightAllSame;
  }
};

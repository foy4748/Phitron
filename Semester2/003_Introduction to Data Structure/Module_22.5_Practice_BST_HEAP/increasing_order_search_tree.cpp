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
// https://leetcode.com/problems/increasing-order-search-tree/

class Solution {
public:
  queue<TreeNode *> q;

  void create_node_queue(TreeNode *root) {
    if (!root)
      return;
    create_node_queue(root->left);
    this->q.push(root);
    create_node_queue(root->right);
  }

  TreeNode *increasingBST(TreeNode *root) {
    create_node_queue(root);
    TreeNode *newRoot = this->q.front();
    newRoot->left = NULL;
    this->q.pop();
    TreeNode *temp = newRoot;
    while (!q.empty()) {
      TreeNode *f = this->q.front();
      f->left = NULL;
      temp->right = f;
      temp = f;
      this->q.pop();
    }

    return newRoot;
  }
};

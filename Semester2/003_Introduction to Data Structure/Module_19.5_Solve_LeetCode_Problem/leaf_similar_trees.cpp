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
// https://leetcode.com/problems/leaf-similar-trees/
class Solution {
public:
  vector<int> v1;
  vector<int> v2;

  /*
  void getLeafNodes(TreeNode* root, vector<int> & v){
      if(!root) return;
      queue<TreeNode*> q;
      q.push(root);
      while(!q.empty()){
          TreeNode* f = q.front();
          q.pop();
          if(!f->left && !f->right){
              v.push_back(f->val);
          }
          if(f->left) q.push(f->left);
          if(f->right) q.push(f->right);
      }
  }
  */

  void getLeafNodes(TreeNode *root, vector<int> &v) {
    if (!root)
      return;
    getLeafNodes(root->left, v);
    if (!root->left && !root->right) {
      v.push_back(root->val);
    }
    getLeafNodes(root->right, v);
  }

  bool leafSimilar(TreeNode *root1, TreeNode *root2) {
    this->v1.clear();
    this->v2.clear();

    getLeafNodes(root1, this->v1);
    getLeafNodes(root2, this->v2);

    // for(int c : this->v1) cout<<c<<" "; cout<<endl;
    // for(int c : this->v2) cout<<c<<" "; cout<<endl;

    if (this->v1.size() != this->v2.size())
      return false;

    int flag = 1;
    for (int i = 0; i < this->v1.size(); i++) {
      if (this->v1[i] != this->v2[i])
        flag = 0;
    }

    return flag == 1;
  }
};

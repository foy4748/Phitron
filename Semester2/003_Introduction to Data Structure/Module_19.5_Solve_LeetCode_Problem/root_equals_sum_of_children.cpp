/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// LeetCode
// https://leetcode.com/problems/root-equals-sum-of-children
class Solution {
public:
    int sum = 0;
    int sumOfTreeValues(TreeNode* root){
        if(!root) return 0;
        this->sum = this->sum + root->val;
        sumOfTreeValues(root->left);
        sumOfTreeValues(root->right);
        return sum;
    }
    bool checkTree(TreeNode* root) {

        int leftSum = 0;
        int rightSum = 0;
        if(root->left){
            this->sum = 0;
            leftSum = sumOfTreeValues(root->left);
        }

        if(root->right){
            this->sum = 0;
            rightSum = sumOfTreeValues(root->right);
        }


        if(root)
        return root->val == leftSum + rightSum;
        else
        return false;
    }
};

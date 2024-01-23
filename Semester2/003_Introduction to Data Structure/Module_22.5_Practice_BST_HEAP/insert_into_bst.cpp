/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left, *right;
        TreeNode() : val(0), left(NULL), right(NULL) {}
        TreeNode(T x) : val(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : val(x),
left(left), right(right) {}
    };


************************************************************/

// CodeNinja
// https://www.codingninjas.com/studio/problems/insert-into-a-binary-search-tree_1279913

void insertion_in_bst(TreeNode<int> *root, int val) {
  if (!root)
    return;
  if (val < root->val) {
    if (!root->left) {
      root->left = new TreeNode<int>(val);
    } else {
      insertion_in_bst(root->left, val);
    }
  } else {
    if (!root->right) {
      root->right = new TreeNode<int>(val);
    } else {
      insertion_in_bst(root->right, val);
    }
  }
}

TreeNode<int> *insertionInBST(TreeNode<int> *root, int val) {
  // Write your code here.
  insertion_in_bst(root, val);
  return root;
}

// LC-> 94. Binary Tree Inorder Traversal

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

class Solution
{
public:
    void inorderTraversalHelper(TreeNode *root, vector<int> &ans)
    {
        // edge case
        if (root == NULL)
            return;

        inorderTraversalHelper(root->left, ans);  // MoveToLeft
        ans.push_back(root->val);                 // Print
        inorderTraversalHelper(root->right, ans); // MoveToRight
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        inorderTraversalHelper(root, ans);
        return ans;
    }
};
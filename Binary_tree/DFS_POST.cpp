// // 144. Binary Tree Postorder Traversal

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
class Solution
{
public:
    void postorderTraversalHelper(TreeNode *root, vector<int> &ans)
    {
        // edge case
        if (root == NULL)
        {
            return;
        }
        postorderTraversalHelper(root->left, ans);  // moveToLeft
        postorderTraversalHelper(root->right, ans); // moveToRight
        ans.push_back(root->val);                   // print
    }

    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        postorderTraversalHelper(root, ans);
        return ans;
    }
};
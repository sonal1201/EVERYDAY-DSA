// 144. Binary Tree PREorder Traversal

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
    void preorderTraversalHelper(TreeNode *root, vector<int> &ans)
    {
        // edge case
        if (root == NULL)
        {
            return;
        }

        ans.push_back(root->val);                  // print
        preorderTraversalHelper(root->left, ans);  // moveToLeft
        preorderTraversalHelper(root->right, ans); // moveToRight
    }

    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        preorderTraversalHelper(root, ans);
        return ans;
    }
};
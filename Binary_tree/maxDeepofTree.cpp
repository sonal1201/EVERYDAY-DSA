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
    int maxDepth(TreeNode *root)
    {
        // Base case..
        if (root == NULL)
        {
            return 0;
        }

        // Recursive call....
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        int ans = 1 + max(left, right);
        return ans;
    }
};
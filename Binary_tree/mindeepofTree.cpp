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
    int depthFinder(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int left = depthFinder(root->left);
        int right = depthFinder(root->right);
        if (left == 0)
            return 1 + right; // left node is empty so there is not left part
        if (right == 0)
            return 1 + left; // right node is empty so there is not right part
        else
            return min(left, right) + 1;
        // return ans;
    }
    int minDepth(TreeNode *root)
    {

        return depthFinder(root);
    }
};
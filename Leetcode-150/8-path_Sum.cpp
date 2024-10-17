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
    bool inOrder(TreeNode *root, int targetSum, int sum)
    {
        if (root == NULL)
        {
            return false;
        }
        sum += root->val;

        // if root reached leafnode
        if (root->left == NULL && root->right == NULL)
        {
            if (sum == targetSum)
            {
                return true;
            }
            return false;
        }

        int leftNode = inOrder(root->left, targetSum, sum);
        int rightNode = inOrder(root->right, targetSum, sum);

        return leftNode || rightNode;
    }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        int sum = 0;

        bool checkSum = inOrder(root, targetSum, sum);

        return checkSum;
    }
};
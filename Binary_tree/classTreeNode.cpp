#include <iostream>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        left = NULL;
        right = NULL;
    }
    TreeNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    TreeNode *ptr = new TreeNode(5);
    TreeNode node(10);
    cout << ptr->data << endl;
    cout << node.data;
}
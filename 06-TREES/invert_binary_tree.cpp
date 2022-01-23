struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == nullptr)
            return root;

        TreeNode *ptr = root->left;
        root->left = root->right;
        root->right = ptr;

        if (root->left)
            invertTree(root->left);

        if (root->right)
            invertTree(root->right);

        return root;
    }
};
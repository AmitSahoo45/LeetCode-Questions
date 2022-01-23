struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution
{
public:
    bool helper(TreeNode *root, int prevVal)
    {
        if (!root)
            return true;
        return ((root->val == prevVal) && helper(root->left, root->val) && helper(root->right, root->val));
    }
    bool isUnivalTree(TreeNode *root)
    {
        return helper(root, root->val);
    }
};
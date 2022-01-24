#include <bits/stdc++.h>

using namespace std;

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

class Solution1
{
public:
    bool recursive(TreeNode *root, int v)
    {
        if (root == NULL)
            return true;

        recursive(root->left, root->val);
        if (root->val != v)
        {
            cout << root->val << " " << v << " | ";
            return false;
        }
        recursive(root->right, root->val);

        return true;
    }

    bool isUnivalTree(TreeNode *root)
    {
        return recursive(root, root->val);
    }
};
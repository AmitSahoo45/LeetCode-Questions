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
    TreeNode *tree = NULL;
    void leftTree(TreeNode *root, auto i)
    {
        if (root == NULL)
            return;
        i--;
        root->val = *i;
        leftTree(root->left);
        leftTree(root->right);
    }

    TreeNode *constructMaximumBinaryTree(vector<int> &a)
    {
        auto i = max_element(a.begin(), a.end());
        tree->val = *i;
        cout << tree->val << endl;
        tree->left = tree->right = NULL;
        leftTree(tree, i);
        return tree;
    }
};

int main()
{

    return 0;
}
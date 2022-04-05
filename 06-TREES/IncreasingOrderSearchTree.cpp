#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> l;

    void inorder(TreeNode *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        l.push_back(root->val);
        inorder(root->right);
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        inorder(root);

        TreeNode *tr = new TreeNode(0), *curs = tr;

        for (auto it : l)
        {
            curs->right = new TreeNode(it);
            curs = curs->right;
        }
        return tr->right;
    }
};

int main()
{

    return 0;
}
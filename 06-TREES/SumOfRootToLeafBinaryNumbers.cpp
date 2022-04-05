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
    int sumRoot(TreeNode *root, int sum)
    {
        if (root == NULL)
            return 0;
        sum = (sum << 1) + root->val;
        if (!root->left && !root->right)
            return sum;
        return sumRoot(root->left, sum) + sumRoot(root->right, sum);
    }
    int sumRootToLeaf(TreeNode *root)
    {
        return sumRoot(root, 0);
    }
};

int main()
{

    return 0;
}
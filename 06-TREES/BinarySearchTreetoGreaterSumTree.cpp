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
    int sum;
    
    void sumOfNodes(TreeNode *root)
    {
        if (root == NULL)
            return;
        sumOfNodes(root->right);
        root->val += sum;
        sum = root->val;
        sumOfNodes(root->left);
    }

    TreeNode *bstToGst(TreeNode *root)
    {
        sumOfNodes(root);
        return root;
    }
};

int main()
{

    return 0;
}
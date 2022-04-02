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
    vector<int> v;
    void pre(TreeNode *root)
    {
        if (root == nullptr)
            return;
        v.push_back(root->val);
        pre(root->left);
        pre(root->right);
    }
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        pre(root1);
        pre(root2);
        sort(v.begin(), v.end());
        return v;
    }
};

int main()
{

    return 0;
}
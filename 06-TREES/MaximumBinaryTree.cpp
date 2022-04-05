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
    TreeNode *constructMaximumBinaryTree(vector<int> &n)
    {
        if (n.size() == 0)
            return NULL;
        auto it = max_element(n.begin(), n.end());
        TreeNode *root = new TreeNode(*it);
        vector<int> leftwala(n.begin(), it);
        vector<int> rightwala(it + 1, n.end());
        root->left = constructMaximumBinaryTree(leftwala);
        root->right = constructMaximumBinaryTree(rightwala);
        return root;
    }
};

int main()
{

    return 0;
}
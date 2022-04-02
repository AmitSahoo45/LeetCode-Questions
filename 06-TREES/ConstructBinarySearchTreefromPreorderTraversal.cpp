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
    TreeNode *bstFromPreorder(vector<int> &preorder)
    {
        TreeNode *root = new TreeNode(preorder[0]);
        for (int i = 1; i < preorder.size(); i++)
        {
            TreeNode *cur = root;
            while (cur)
            {
                if (preorder[i] < cur->val)
                {
                    if (cur->left)
                    {
                        cur = cur->left;
                    }
                    else
                    {
                        cur->left = new TreeNode(preorder[i]);
                        break;
                    }
                }
                else
                {
                    if (cur->right)
                    {
                        cur = cur->right;
                    }
                    else
                    {
                        cur->right = new TreeNode(preorder[i]);
                        break;
                    }
                }
            }
        }
        return root;
    }
};

int main()
{

    return 0;
}
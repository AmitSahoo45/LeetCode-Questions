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
    TreeNode *root = NULL;
    TreeNode *insertion(vector<int> v, TreeNode *root)
    {
        if (v.size() == 0)
            return NULL;

        auto it = find(v.begin(), v.end(), *max_element(v.begin(), v.end()));
        root->val = *it;
        v.erase(it);

        insertion()
    }

    TreeNode *constructMaximumBinaryTree(vector<int> &n)
    {
    }
};

int main()
{

    return 0;
}
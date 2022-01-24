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
    TreeNode *helper(int left, int right, vector<int> &nums)
    {
        if (left > right)
        {
            return NULL;
        }

        int mid = left + (right - left) / 2;

        TreeNode *root = new TreeNode(nums.at(mid));

        root->left = helper(left, mid - 1, nums);
        root->right = helper(mid + 1, right, nums);

        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return NULL;
        }

        return helper(0, nums.size() - 1, nums);
    }
};
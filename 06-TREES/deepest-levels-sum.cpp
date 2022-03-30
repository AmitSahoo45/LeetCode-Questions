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
    int deepestLeavesSum(TreeNode *root, int sum = 0)
    {
        if (root == nullptr)
            return 0;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            sum = 0;
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                sum += node->val;
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
        }
        return sum;
    }
};
// Solution - 1
// Runtime: 134 ms, faster than 54.79% of C++ online submissions for Deepest Leaves Sum.
// Memory Usage: 61.7 MB, less than 43.81% of C++ online submissions for Deepest Leaves Sum.
// Time Complexity : O(N)
// Space Complexity : O(N)

class Solution2
{
public:
    int deepest = 0, sum = 0;
    int deepestLeavesSum(TreeNode *root, int depth = 0)
    {
        if (!root)
            return 0;
        if (!root->left && !root->right)
            if (depth == deepest)
                sum += root->val;
            else if (depth > deepest)
                sum = root->val, deepest = depth;
        deepestLeavesSum(root->left, depth + 1);
        deepestLeavesSum(root->right, depth + 1);
        return sum;
    }
};

int main()
{

    return 0;
}
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
    vector<double> averageOfLevels(TreeNode *root)
    {
        if (!root)
            return {};

        queue<TreeNode *> q;
        vector<double> v;

        q.push(root);

        while (!q.empty())
        {
            int s = q.size();
            double sum = 0;
            int t = s;
            while (t--)
            {
                TreeNode *a = q.front();
                sum += a->val;
                q.pop();

                if (a->left)
                {
                    q.push(a->left);
                }

                if (a->right)
                {
                    q.push(a->right);
                }
            }
            v.push_back(sum / (double)s);
        }

        return v;
    }
};
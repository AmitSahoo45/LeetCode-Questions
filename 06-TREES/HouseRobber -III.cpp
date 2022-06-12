#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
#define all(v) v.begin(), v.end()
#define V(a, x, n, m) vector<vector<x>> a(n, vector<x>(m))

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
    unordered_map<TreeNode *, int> um;
    int rob(TreeNode *root)
    {
        if (!root)
            return 0;
        if (!root->left && !root->right)
            return root->val;
        if (um.count(root))
            return um[root];
        int one = root->val;
        if (root->left)
        {
            one += rob(root->left->left);
            one += rob(root->left->right);
        }
        if (root->right)
        {
            one += rob(root->right->left);
            one += rob(root->right->right);
        }
        int two = rob(root->left) + rob(root->right);
        um[root] = max(one, two);
        return max(one, two);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
    }
    return 0;
}

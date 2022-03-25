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
    vector<int> res1, res2;
    void inorder(TreeNode *root, int C)
    {
        if (!root)
            return;
        if (!root->left && !root->right && C == 1)
            res1.push_back(root->val);
        if (!root->left && !root->right && C == 2)
            res2.push_back(root->val);
        inorder(root->left, C);
        inorder(root->right, C);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        inorder(root1, 1);
        inorder(root2, 2);
        if (res1.size() != res2.size())
            return false;
        for (int i = 0; i < res1.size(); i++)
        {
            if (res1[i] != res2[i])
                return false;
        }
        return true;
    }
};

class Solution2{
public:
    vector <int> v1,v2;
    void inorder(TreeNode* root,vector <int> &v){
        if(root==nullptr)
            return;
        inorder(root->left,v);
        if((root->left==NULL) && (root->right==NULL))
            v.push_back(root->val);
        inorder(root->right,v);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        inorder(root1,v1);
        inorder(root2,v2);
        
        return (v1==v2)?true:false;
    }
};
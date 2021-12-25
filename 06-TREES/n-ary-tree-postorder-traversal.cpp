#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    vector<Node *> children;

    Node()
    {
        val = 0;
    }

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

class SolutionIterative
{
public:
    vector<int> res;
    vector<int> postorder(Node *root)
    {
        if (root == NULL)
            return res;
        stack<Node *> stk;
        stk.push(root);
        while (!stk.empty())
        {
            auto temp = stk.top();
            stk.pop();
            for (int i = 0; i < temp->children.size(); i++)
                stk.push(temp->children[i]);
            res.push_back(temp->val);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

class SolutionRecursive
{
public:
    vector<int> v;
    void post(Node *root)
    {
        if (!root)
            return;
        for (auto child : root->children)
            post(child);
        v.push_back(root->val);
    }

    vector<int> postorder(Node *root)
    {
        if (!root)
            return v;
        post(root);
        return v;
    }
};
int main()
{

    return 0;
}
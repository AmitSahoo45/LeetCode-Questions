#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

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

class SolutionRecursive
{
public:
    vector<int> v;
    void dfs(Node *root)
    {
        v.push_back(root->val);
        if (root->children.empty())
            return;
        for (auto child : root->children)
            dfs(child);
    }
    vector<int> preorder(Node *root)
    {
        if (root == nullptr)
            return v;
        dfs(root);
        return v;
    }
};
// root = [1,null,3,2,4,null,5,6]
// r : 1 | c : 3	r : 3 | c : 5	r : 5 | c : 6	r : 6 | c : 2	r : 2 | c : 4	r : 4

class SolutionIterative
{
public:
    vector<int> preorder(Node *root)
    {
        int i = 0;
        vector<int> ans;
        vector<Node *> l;
        stack<Node *> st;
        Node *tmp;
        if (!root)
            ;
        return ans;
        st.push(root);
        while (!st.empty())
        {
            tmp = st.top();
            st.pop();
            ans.push_back(tmp->val);
            l = tmp->children;
            i = l.size() - 1;
            while (i >= 0)
            {
                st.push(l[i--]);
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}
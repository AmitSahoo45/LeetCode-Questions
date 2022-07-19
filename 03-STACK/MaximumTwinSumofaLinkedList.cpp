#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// My solution ---->>>
// using array
class Solution
{
public:
    vector<int> v;
    int pairSum(ListNode *head)
    {
        while (head)
        {
            v.push_back(head->val);
            head = head->next;
        }
        int n = v.size(), maxi = INT_MIN;
        for (int i = 0; i < n / 2; i++)
            maxi = max(maxi, (v[i] + v[n - 1 - i]));

        return maxi;
    }
};

// using stack
class StackSolution
{
    public:
    
};

// Other Solutions --->>>

int main()
{

    return 0;
}
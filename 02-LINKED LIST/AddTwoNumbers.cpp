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

class Solution
{
    // ListNode *c1 = l1, *c2 = l2;
    // ListNode *setLine = new ListNode(0);
    // ListNode *set = setLine;
    // while (c1 && c2)
    // {
    // }
public:
    ListNode *finalNode = nullptr;
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr)
        {
            int sum = (l1 != nullptr ? l1->val : 0) + (l2 != nullptr ? l2->val : 0) + carry;
            carry = sum / 10;
            ListNode *temp = new ListNode(sum % 10);
            temp->next = finalNode;
            finalNode = temp;
            l1 = l1 != nullptr ? l1->next : l1;
            l2 = l2 != nullptr ? l2->next : l2;
        }
        if (carry > 0)
        {
            ListNode *temp = new ListNode(carry);
            temp->next = finalNode;
            finalNode = temp;
        }
        ListNode *cur = finalNode, *prev = NULL, *next;
        while (cur)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        finalNode = prev;
        return finalNode;
    }
};
int main()
{

    return 0;
}
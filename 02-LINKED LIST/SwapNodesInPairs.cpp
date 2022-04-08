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
public:
    int leng(ListNode *root)
    {
        ListNode *temp = root;
        int ans = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            ans++;
        }
        return ans;
    }
    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
            
        ListNode *firstptr = head;
        ListNode *secondptr;
        ListNode *prev = NULL;
        ListNode *ans = firstptr->next;
        int cnt = leng(head);
        while (firstptr != NULL && cnt != 1)
        {
            secondptr = firstptr->next;
            firstptr->next = secondptr->next;
            secondptr->next = firstptr;
            if (prev != NULL)
                prev->next = secondptr;

            prev = firstptr;
            firstptr = firstptr->next;
            cnt -= 2;
        }
        return ans;
    }
};

int main()
{

    return 0;
}
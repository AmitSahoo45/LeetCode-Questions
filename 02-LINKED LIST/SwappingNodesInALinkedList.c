#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *swapNodes(struct ListNode *head, int k)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    struct ListNode *ptr = head, *qtr = head, *it;

    k = k - 1;
    while (k)
    {
        k--;
        ptr = ptr->next;
    }

    it = ptr;
    while (it->next != NULL)
    {
        it = it->next;
        qtr = qtr->next;
    }

    int temp = ptr->val;
    ptr->val = qtr->val;
    qtr->val = temp;

    return head;
}
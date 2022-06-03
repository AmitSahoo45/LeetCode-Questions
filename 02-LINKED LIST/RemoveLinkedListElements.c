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

struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode *removeElements(struct ListNode *head, int val)
{
    if (head == NULL)
        return head;

    struct ListNode *ptr = head;
    struct ListNode *qtr = head->next;

    while (qtr)
    {
        if (qtr->val == val)
        {
            ptr->next = qtr->next;
            qtr = qtr->next;
        }
        else
        {
            ptr = ptr->next;
            qtr = qtr->next;
        }
    }
    if (head->val == val)
    {
        head = head->next;
    }
    return head;
}